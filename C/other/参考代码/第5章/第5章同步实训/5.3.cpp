#include "stdio.h"
#define SIZE 10
int main()
{
    int iFirst[SIZE] = {98, 95, 91, 89, 88, 85, 82, 75, 70, 65};
    int i;
    int iSecond[SIZE];
    printf("the first array is:\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%d\t", iFirst[i]);
        iSecond[SIZE-1-i] = iFirst[i];
    }
    printf("the second array is:\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%d\t", iSecond[i]);
    }
    return 0;
}

