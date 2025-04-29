#include <stdio.h>
int main(){
  int  iX,iY;
  printf("please input a integer:");
  scanf("%d",&iX);
  iY=iX;
  if (iX<0)
    iY=-iX;
  printf("\n|%d|=%d",iX,iY);
  return 0;
}

