#include "stdio.h"
int main( )
{ 
	int i,iNum,iCount1=0,iCount2=0,iCount3=0;
  for(i=1;i<11;i++)
    {
      scanf("%d",&iNum);
      if (iNum>0)
         iCount1++;    /*iCount1��ʾ����0��*/
      else  if(iNum<0)
               iCount2++; /*iCount2��ʾС��0����*/
            else
                iCount3++; /*iCount3��ʾ����0����*/
     }
	printf("����0����%d  С��0����%d   ����0����%d",iCount1,iCount2,iCount3);
	return 0;
}

