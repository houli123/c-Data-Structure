#include "stdio.h"
int main( )
{ int i,iScore1,iScore2,iCount1=0,iCount2=0;
  float fAvg;
  for(i=1;i<11;i++)/*��10��ѧ������Ϊ��*/
    { scanf("%d%d",&iScore1,&iScore2);
      fAvg=(iScore1+iScore2)/2.0;
      if (fAvg>=85)
         iCount1++;    /*iCount1��ʾ���������*/
      else  if(fAvg>=60)
               iCount2++; /*iCount2��ʾ���������*/
     }
   printf("%d  %d",iCount1,iCount2);
   return 0;
}

