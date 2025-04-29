#include "stdio.h"
int main( )
{ int i, iSum1=0,iSum2=0;
  for(i=1;i<=100;i=i+2)
     {  
	 	iSum1=iSum1+i;
        iSum2=iSum2+(i+1);  
	}
  printf("sum1=%d,sum2=%d",iSum1,iSum2);
  return 0;
}

