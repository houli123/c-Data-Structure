#include "stdio.h"

int main()
{
  int ix,iy; 
  printf("please input a point coordinates :");
  scanf("%d,%d",&ix,&iy);
  if(ix*ix+iy*iy<16)
     printf("The point is in the circle inside԰��\n" );
   
  else if(ix*ix+iy*iy>16)
     printf("The point is in the circle of the externalԲ��\n");
  else if(ix*ix+iy*iy==16)
     printf("The point is in the circle roundԲ��\n");
  return 0;
}

