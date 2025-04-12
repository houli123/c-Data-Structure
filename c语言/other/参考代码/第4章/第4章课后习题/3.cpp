#include "stdio.h"
int main( )
{ int i,iScore1,iScore2,iCount1=0,iCount2=0;
  float fAvg;
  for(i=1;i<11;i++)/*以10个学生人数为例*/
    { scanf("%d%d",&iScore1,&iScore2);
      fAvg=(iScore1+iScore2)/2.0;
      if (fAvg>=85)
         iCount1++;    /*iCount1表示优秀的人数*/
      else  if(fAvg>=60)
               iCount2++; /*iCount2表示及格的人数*/
     }
   printf("%d  %d",iCount1,iCount2);
   return 0;
}

