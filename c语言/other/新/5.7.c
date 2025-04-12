#include <stdio.h>
int main()
{
	int iscore[][3]={11,22,33,44,55,66},i,k;
	for(i=0;i<2;i++){
		for(k=0;k<3;k++){
			printf("%d\t",iscore[i][k]);
		}
		printf("\n");
	}
	return 0;
}
