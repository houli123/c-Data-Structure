#include <stdio.h>  //p66习题三 2.
int main() //0494刘杰
{
	int i1,i2,i3;
	printf("请输入三个整数");
	scanf("%d%d%d",&i1,&i2,&i3);
	if ((i1>=i2)&&(i2>=i3))printf("%d,%d,%d",i3,i2,i1);
	//把所有的可能都罗列一遍 
	else if((i1>=i3)&&(i3>=i2))printf("%d,%d,%d",i2,i3,i1);
	else if((i3>=i2)&&(i2>=i1))printf("%d,%d,%d",i1,i2,i3);
	else if((i3>=i1)&&(i1>=i2))printf("%d,%d,%d",i2,i1,i3);
	else if((i2>=i1)&&(i1>=i3))printf("%d,%d,%d",i3,i1,i2);
	else if((i2>=i3)&&(i3>=i1))printf("%d,%d,%d",i2,i3,i1);
	return 0;
} 
