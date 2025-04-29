#include "stdio.h"
#include "math.h"
#define PI 3.1415926
int main()
{
    float fr,fArea,fSix,fPercent;
    printf("please input the circle's radius:");
    scanf("%f",&fr);
    fArea=PI*fr*fr;
    fSix=sqrt(3)*3/2*fr*fr;
    fPercent=fSix/fArea;
    printf("fArea=%f,fSix=%f,fPercent=%f",fArea,fSix,fPercent);
    return 0;
}

