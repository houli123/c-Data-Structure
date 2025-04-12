#include "stdio.h"
#include "conio.h"
int main()
{
    int i,j,s[10][10];
    s[0][0]=1;
    s[1][0]=1;
    s[1][1]=1;
    printf("1\n1\t1\n");
    for(i=2;i<10;i++)
    {
        s[i][0]=1;
        printf("%d\t",s[i][0]);
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                s[i][j]=1;
            }
            else
                s[i][j]=s[i-1][j]+s[i-1][j-1];
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
