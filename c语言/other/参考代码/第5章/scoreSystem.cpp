#include "stdio.h"
int main()
{
 int iScore[11]={90,78,89,77,66,33,55,44,22,11},i,j;
 int iMenu,iInsert,iDelete,iFind,iTemp,iFlag;

 printf("  ***** please use my score system  *****\n");
 printf("  1: input    2:find    3:sort   \n");
 printf("  4: insert   5:delete  6:exit   \n");


while(1)
{ printf("\nplease input a menu option:");
  scanf("%d",&iMenu);

  switch(iMenu)
 { case 1:
           printf("\nplease input ten datas:");
           for(i=0;i<10;i++)
              scanf("%d",&iScore[i]);
           for(i=0;i<10;i++)
              printf("%d ",iScore[i]);
           break;

  case 2:  printf("\nplease input the data to be found:");
           scanf("%d",&iFind);
           for(i=0;i<10;i++)
           {  if(iFind == iScore[i])
                  printf("the data you select is %dth:%d\n",i+1,iScore[i]);
             }
            break;

 case 3:
          for(i=0;i<9;i++)
          {
            for(j=0;j<9-i;j++)
               {
                if(iScore[j]<iScore[j+1])
                  {
                   iTemp = iScore[j];
                   iScore[j] = iScore[j+1];
                   iScore[j+1] = iTemp;
                   }
              }
           }
          printf("\nthe sorted datas :");
          for(i=0;i<10;i++)
              printf("%d ",iScore[i]);
           break;

 case 4:  printf("\nplease input the data to be inserted:");
          scanf("%d",&iInsert);
          for(i=0;i<10;i++)
          {
             if(iInsert>iScore[i])
               {
                iFlag=i;
                break;
                }
           }
          for(i=10;i>iFlag;i--)
              iScore[i] = iScore[i-1];
          iScore[iFlag] = iInsert;
          for(i=0;i<=10;i++)
              printf("%d ",iScore[i]);
           break;

 case 5: printf("\nplease input the data to be deleted:");
          scanf("%d",&iDelete);
          for(i=0;i<11;i++)
          {
             if(iDelete==iScore[i])
               { iFlag = i;
               break;  }

            }
         for(i=iFlag;i<10;i++)
             iScore[i] = iScore[i+1];

         for(i=0;i<10;i++)
             printf("%d ",iScore[i]);

         break;

  case 6:
          return 0;

   }
 }
	return 0;

}
