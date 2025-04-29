#include "stdio.h"
int main()
{
   int iA[5]={100,90,80,70,60},iB[5]={85,75,65,40,30},iMerge[10],i,j,iTemp;
   for(i=0;i<5;i++)
      iMerge[i] = iA[i];
   for(j=0;j<5;j++)
      iMerge[5+j] = iB[j];
   printf("排序前的两个数组合并后："); 
   for(i=0;i<10;i++)
      printf(" %d",iMerge[i]);
   printf("\n");  
	  
   for(i=1;i<=9;i++)
    {
        for(j=9;j>=i;j--)
        {
            if(iMerge[j]>iMerge[j-1])
            {
                iTemp = iMerge[j];
                iMerge[j] = iMerge[j-1];
                iMerge[j-1] = iTemp;
             }
         }
     }
   printf("排序后的数组：");
   for(i=0;i<10;i++)
      printf(" %d",iMerge[i]);
   return 0;
}
