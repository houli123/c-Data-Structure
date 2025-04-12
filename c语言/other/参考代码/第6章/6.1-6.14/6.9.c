#include <stdio.h>
#define N 10
void fndel(int igao[],int inum)
{
	int i;
	for(i=0;i<N-1;i++)
		if(igao[i]==inum)
		{
			for(i;i<N-1;i++)
				igao[i]=igao[i+1];
			igao[N-1]=0;
			break;
		}//    221900494刘杰 
}
void main()
{
	int i,igao[N],inum;
	for(i=0;i<N;i++)
		scanf("%d",&igao[i]);
	printf("请输入要删除的身高：\n");
	scanf("%d",&inum);
	fndel(igao,inum);
	for(i=0;i<N-1;i++)
		printf("%d ",igao[i]);
	getch();
} 
