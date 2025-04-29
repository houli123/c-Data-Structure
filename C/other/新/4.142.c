#include <stdio.h> 
int main(){
	int i=3,k;
	for(;i<=100;i++){
		for(k=2;k<i;k++){
			if(i%k==0)
				break;
			if(k==i-1)
				printf("%d,",i);
		}
	}
    return 0;
}
