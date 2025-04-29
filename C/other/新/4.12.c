#include <stdio.h> 
#define N 9
int main(){
	int i,k;
	for(i=1;i<=N;i++){
		for(k=1;k<=i;k++)
			printf("%d*%d=%d\t",k,i,k*i);
		printf("\n");
	}
    return 0;
}
