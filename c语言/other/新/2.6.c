#include <stdio.h> 
int main(){
	int i,i1,i2,i3;
	printf("������һ����λ������");
	scanf("%d",&i);
	i1=i%10;  //��λ
	i2=i/10%10;
	i3=i/100;
	printf("sum=%d",i1+i2+i3);
    return 0;
}
