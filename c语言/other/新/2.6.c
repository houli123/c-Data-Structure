#include <stdio.h> 
int main(){
	int i,i1,i2,i3;
	printf("请输入一个三位的数字");
	scanf("%d",&i);
	i1=i%10;  //个位
	i2=i/10%10;
	i3=i/100;
	printf("sum=%d",i1+i2+i3);
    return 0;
}
