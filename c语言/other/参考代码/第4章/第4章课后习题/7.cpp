#include "stdio.h"
int main()
{ int  k,iSum=0;/*����ѭ���������ۼӱ���*/
  for(k=1;iSum<1000;k++)
    iSum= iSum+k*k*k;
  printf("%d",k-2);
  return 0;
}

