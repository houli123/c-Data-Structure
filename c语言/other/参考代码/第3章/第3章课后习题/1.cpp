#include "Stdio.h"

int main()
{
  int iYear;
  printf("please input the year:");
  scanf("%d",&iYear);
  if(iYear%400==0||(iYear%4==0&&iYear%100!=0))
     printf("%d is leap",iYear);
  else
     printf("%d is not leap",iYear);

  return 0;
}

