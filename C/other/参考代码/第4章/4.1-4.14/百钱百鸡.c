#include <stdio.h>
int main()
{
	int i1,i2,i3;//i1为公鸡i2为母鸡 
	for(i1=1;i1<=20;i1++)//公鸡五元一只， 母鸡三元一只，小鸡一元三只 
		for(i2=1;i2<=33;i2++)
			{
				i3=100-i1-i2;
				if(i3%3==0 && i1+i2+i3==100 && i1*5+i2*3+i3/3==100)
					printf("公鸡有%d个，母鸡有%d个，小鸡有%d个\n",i1,i2,i3);
			}
	return 0;
}
