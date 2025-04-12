#include <stdio.h> 
long fnn(int n){
	if(n==1){
		return 1;
	}else{
		return fnn(n-1)*n;
	}
}

int main()
{
	int i;
	scanf("%d",&i);
	printf("%d!=%ld",i,fnn(i));
    return 0;
}
