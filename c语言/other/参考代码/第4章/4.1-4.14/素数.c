#include <stdio.h>
void main()
{
	int i=3,k,n;
	for(;i<=100;i++)
	{
		n=0;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
				n++;
		}
		if(!n)
			printf("%d ",i);
	}
}
