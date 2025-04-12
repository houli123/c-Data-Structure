#include <stdio.h> 
#define N 4
int main(){
	int i,j,i1,istu[N+1]={4,3,1,0};
	printf("请输入要插入的数：");
	scanf("%d",&i1);
	for(i=0;i<N;i++){
		if(i1<=istu[i] && i1>=istu[i+1]){
			i++;
			//printf("%d\n",i);
			break;
		}
	}
	for(j=N;j>i;j--){
		istu[j]=istu[j-1];
	}
	istu[i]=i1;
	for(i=0;i<=N;i++){
		printf("%d,",istu[i]);
	}
    return 0;
}
