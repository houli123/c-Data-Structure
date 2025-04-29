#include "stdio.h"
int main()
{
    float fx;
    printf("please input a float:");
    scanf("%f",&fx);
    if(fx<0)
      fx=-fx;
    printf("|fx|=%f",fx);
    return 0;
}

