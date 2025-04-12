#include <stdio.h> //p111
#include <string.h>
#define N 8
void fn(int istu[1])
{
	for(int i=0;i<10;i++){
		printf("%d ",istu[i]);
	}
}

int main()
{
	int ix[5]={1,2,3,4,5};
	fn(ix);
    return 0;
}
