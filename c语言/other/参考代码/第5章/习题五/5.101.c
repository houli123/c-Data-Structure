#include <stdio.h>
#define N 20
void main()
{
	int i,inum[N]={1,1};
	for(i=2;i<20;i++)
		inum[i]=inum[i-1]+inum[i-2];
	for(i=0;i<20;i++)
	{
		printf("%d\t",inum[i]);
		if(i==9)
			printf("\n");
	}
}
