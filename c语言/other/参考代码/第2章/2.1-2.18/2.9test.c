#include <stdio.h> 

int main()
{
	int i1,i2;
	printf("请输入两个整数：");
	scanf("%d%d",&i1,&i2);
	printf("i1+i2=%d,i1-i2=%d,i1*i2=%d,i1/i2=%.1f,i1%ci2=%d",i1+i2,i1-i2,i1*i2,i1/i2*1.0,'%',i1%i2);
    return 0;
}
