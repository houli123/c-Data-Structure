#include <stdio.h>
void main()
{
	int i1=0,isum1=0,isum2=0;
	for (;i1<=100;i1++)//isum1为奇数，isum2为偶数 
	{
		if(i1%2!=0)
			isum1+=i1;
		else
			isum2+=i1;
	}
	printf("1-100奇数和为%d,偶数和为%d",isum1,isum2);
}
