#include <stdio.h>
#define N 6
void main()
{
	int iscore[N+1]={11,87,22,66,33,99},i,itemp,k;
	printf("排序前的数组为：");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);   
	for(i=1;i<N;i++)  
		for(k=N-1;k>=i;k--)
		{ 
			if(iscore[k]>iscore[k-1])
			{
				itemp=iscore[k];
				iscore[k]=iscore[k-1];
				iscore[k-1]=itemp;
			}
		} 
	printf("\n排序后的数组为：");
	for(i=0;i<N;i++)
		printf("%d  ",iscore[i]);
}
