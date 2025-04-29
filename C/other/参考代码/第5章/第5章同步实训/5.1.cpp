#include "stdio.h"
int main()
{
    int iFibo[20] = {1, 1};
    int i;
    for (i=2; i<20; i++)
    {
        iFibo[i] = iFibo[i-1] + iFibo[i-2];
    }
    for (i=0; i<20; i++)
    {
        printf("%d\t", iFibo[i]);
        if (i%5 == 4)
        {
            printf("\n");
        }
    }
    return 0;
}

