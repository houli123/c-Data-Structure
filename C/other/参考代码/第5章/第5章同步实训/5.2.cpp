#include "stdio.h"
int main()
{
   int iA[10]={1,2,3,4,5,6,7,8,9,10},i,iTemp;
   for(i=0;i<5;i++)
   { iTemp = iA[i];
    iA[i] = iA[9-i];
    iA[9-i] = iTemp;
   }
   for(i=0;i<10;i++)
      printf(" %d",iA[i]);
   return 0;
}
