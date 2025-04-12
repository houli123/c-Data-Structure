#include "stdio.h"
int main( )
{ 
	int i,iNum,iCount1=0,iCount2=0,iCount3=0;
  for(i=1;i<11;i++)
    {
      scanf("%d",&iNum);
      if (iNum>0)
         iCount1++;    /*iCount1表示大于0数*/
      else  if(iNum<0)
               iCount2++; /*iCount2表示小于0的数*/
            else
                iCount3++; /*iCount3表示等于0的数*/
     }
	printf("大于0的数%d  小于0的数%d   等于0的数%d",iCount1,iCount2,iCount3);
	return 0;
}

