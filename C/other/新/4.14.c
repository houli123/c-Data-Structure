#include <stdio.h> 
#define N 35
int main(){
	int i,k;
	for(i=0;i<N;i++){
		for(k=0;k<=i;k++){
			if((i+k==35) && (i*2+k*4==94)){
				printf("����%dֻ������%dֻ",i,k);
			}
		}
	}
    return 0;
}
