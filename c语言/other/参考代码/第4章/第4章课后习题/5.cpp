#include "math.h"
#include "stdio.h"
int main()
{ int i,iG,iS,iB;
  for(i=100;i<1000;i++)
   { iG=i%10;  /*计算个位数*/
     iS=i/10%10;  /*计算十位数*/
     iB=i/100;   /*计算百位数*/
     if(i==pow(iG,3)+pow(iS,3)+pow(iB,3))
        printf("%d  ",i);
    }
   return 0;
 }

