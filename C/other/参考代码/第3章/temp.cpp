#include "stdio.h"
int main()
  { 
    int  x,y;                  
    int max;
    printf("please input 2 integer:");
    scanf("%d,%d",&x,&y);
    max=x>y?x:y;
	printf("\n the max is %d",max);
	return 0;
}

