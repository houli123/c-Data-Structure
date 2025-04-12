#include "stdio.h"
int main()
{long i,i0,i1,i2,i3,i4 ;  /*i0个位，i1十位，i2百位，i3千位，i4万位  */

  printf("please input a integer:");
  scanf("%ld",&i);
  i0=i%10;
  i1=i%100/10;
  i2=i%1000/100;
  i3=i/1000%10;
  i4=i/10000;
  if(i0==i4&&i1==i3)
    printf("%ld is huiwen",i);
  else
    printf("%ld is not huiwen",i);
  return 0;
}

