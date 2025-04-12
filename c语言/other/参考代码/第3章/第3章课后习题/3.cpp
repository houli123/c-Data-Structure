#include "Stdio.h"

int main()
{
  int iWeek,iHours ;
  float fSalary,fTaxes;
  printf("please input the week number(1-7):");
  scanf("%d",&iWeek);
  printf("please input the work hours(1-12):");
  scanf("%d",&iHours);
  switch(iWeek){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
       fSalary=20*iHours;
       fTaxes=fSalary*0.045;
       break;
    case 6:
    case 7:
       fSalary=3*20*iHours;
       fTaxes=fSalary*0.045;
       break;

  }
  printf("the salary is %f ,the taxes is %f",fSalary,fTaxes);
  return 0;
}

