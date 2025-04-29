#include "stdio.h"
int main()
{
    char ch1='A',ch2='B',chTemp;
    printf("ch1=%c,ch2=%c\n",ch1,ch2);
    chTemp=ch1;
    ch1=ch2;
    ch2=chTemp;;
    printf("ch1=%c,ch2=%c\n",ch1,ch2);
    return 0;
}

