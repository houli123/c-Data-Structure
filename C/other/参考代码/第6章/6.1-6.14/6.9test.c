#include <stdio.h>
#define N 10
void fndel(int igao[],int inum)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(igao[i]==inum)
		{
			for(i;i<N-1;i++)
				igao[i]=igao[i+1];
			igao[N-1]=0;
			return;
		}
	}
	printf("%d的身高没找到\n",inum);
	return;
}
void main()     //22190494刘杰 
{
	int i,igao[N],inum;
	for(i=0;i<N;i++)
		scanf("%d",&igao[i]);
	printf("请输入要删除的身高：");
	scanf("%d",&inum);
	fndel(igao,inum);
	for(i=0;i<N;i++)
		printf("%d ",igao[i]);
} 
