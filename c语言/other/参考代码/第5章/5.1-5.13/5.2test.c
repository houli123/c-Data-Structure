#include <stdio.h> 
#define N 10
int main()
{
	int stu[N],i,isum=0;
	for(i=0;i<N;i++){
		scanf("%d",&stu[i]);
		isum+=stu[i];
	}
	for(i=0;i<N;i++){
		printf("%d  ",stu[i]);
	}
	printf("\n%d",isum);
    return 0;
}
