#include "stdio.h"
int main()
{
  int  year,month,day,days;  /*年，月，日，该年第几天 */
  printf("please input the year month day:");
  scanf("%d%d%d",&year,&month,&day);
  days=0;
  switch(month){
      case 1:
        days=day;  break;
      case 2:
        days=day+31; break;
      case 3:
        days=day+31+28;break;
      case 4:
         days=day+31+28+31;break;
      case 5:
         days=day+31+28+31+30;break;
      case 6:
         days=day+31+28+31+30+31;break;
      case 7:
         days=day+31+28+31+30+31+30;break;
      case 8:
         days=day+31+28+31+30+31+30+31;break;
      case 9:
         days=day+31+28+31+30+31+30+31+31;break;
      case 10:
         days=day+31+28+31+30+31+30+31+31+30;break;
      case 11:
         days=day+31+28+31+30+31+30+31+31+30+31;break;
      case 12:
         days=day+31+28+31+30+31+30+31+31+30+31+30;break;
  }
  if((month>=3&&month<=12)&&(year%4==0&&year%100!=0)||year%400==0)
    days+=1;
  printf("days=%d",days);
  return 0;
}

