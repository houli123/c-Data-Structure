#include "stdio.h"

int main()
{
  int ix,iy; 
  printf("please input a point coordinates :");
  scanf("%d,%d",&ix,&iy);
  if(ix*ix+iy*iy<16)
     printf("The point is in the circle inside‘∞ƒ⁄\n" );
   
  else if(ix*ix+iy*iy>16)
     printf("The point is in the circle of the external‘≤Õ‚\n");
  else if(ix*ix+iy*iy==16)
     printf("The point is in the circle round‘≤…œ\n");
  return 0;
}

