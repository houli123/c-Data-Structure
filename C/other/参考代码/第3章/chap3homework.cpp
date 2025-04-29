#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
  float f1,f2,f3,fTemp,fC,fArea;
  printf("please input triangular three sides:");
  scanf("%f,%f,%f",&f1,&f2,&f3);
  if(f1+f2>f3&&f2+f3>f1&&f1+f3>f2){
     fTemp=(f1+f2+f3)/2;
     fArea=sqrt(fTemp*(fTemp-f1)*(fTemp-f2)*(fTemp-f3));
     fC=2*fTemp;
     printf("The triangle area is %f\n" ,fArea);
     printf("The circumference of the triangle is %f ",fC);
  }else
     printf("Don't make the triangle");
  return 0;
}

