#include "stdio.h"
int main()
 {  int iA[3][3]={1,2,3,4,5,6,7,8,9},i,t,iResult=0;
    for(i=0;i<3;i++)
       iResult = iResult + iA[i][i];
    printf("The result is %d ",iResult);
    return 0;
 }
