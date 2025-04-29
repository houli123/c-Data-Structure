#include <stdio.h> 
#define N 5
int main(){
	int istu[N],i,k,itemp;
	for(i=0;i<N;i++)
		scanf("%d",&istu[i]);
	for(i=0;i<N;i++){
		for(k=N-1;k>i;k--){
			if(istu[k]<istu[k-1]){
				itemp=istu[k];
				istu[k]=istu[k-1];
				istu[k-1]=itemp;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d,",istu[i]);
	}
    return 0;
}
