#include <stdio.h>
void main()
{
	int i=100,i1,i2,i3;
	//i1为百位数，i2为十位数，i3为个位数 
	for(;i<=999;i++)
	{
		i1=i/100;i1*=i1*i1;//先求出各个位上的数然后再求立方 
		i2=i/10%10;i2*=i2*i2;
		i3=i%10;i3*=i3*i3;
		if((i1+i2+i3)==i)
			printf("%d\t",i);
	}
}
