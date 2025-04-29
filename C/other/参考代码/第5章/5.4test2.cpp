#include "stdio.h"
#define SIZE 10
int main()
{
	int iStudent[SIZE] ={88,97,91,99,68,85,84,80,77,73},iFind;
	int i;
	printf("Please input the inquery score:");
	scanf("%d",&iFind);
	while(iFind!=1000)
	{
		for(i=0;i<SIZE;i++)
		{
			if(iStudent[i]==iFind)	
				{
					printf("The student is %d \n",i+1);
					break;
				}
		}
		if(i==10)
			printf("not found \n");
		scanf("%d",&iFind);
	}
	return 0;
}
