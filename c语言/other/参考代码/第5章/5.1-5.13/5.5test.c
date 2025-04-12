#include <stdio.h> //—°‘Ò≈≈–Ú
#define N 10
int main()
{
	int stu[N]={11,99,77,33,88,22,44,66,55,100},i,k,itemp,imin;
	for(i=0;i<N;i++){
		imin=stu[N-1];
		for(k=N-1;k>=i;k--){
			if(stu[k]<=imin){
				imin=stu[k];
				itemp=k;
			}
		}
		stu[itemp]=stu[i];
		stu[i]=imin;
	}
	for(i=0;i<N;i++){
		printf("%d  ",stu[i]);
	}
    return 0;
}
