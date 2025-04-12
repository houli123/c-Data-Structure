#include <stdio.h>
int fnold(int i)
{
	if(i==1){
		return 10;
	}else{
		return fnold(i-1) + 2;
	}
}

int main()
{
	int i;static int n;
	scanf("%d",&i);
	printf("%d  %d",fnold(i),n);
}
