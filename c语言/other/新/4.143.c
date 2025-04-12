#include <stdio.h> 
#define N 96
int main(){
	int isum=91,inum=95,i1=1,i2=1,i3=3;//i1公鸡，i2母鸡，i3小鸡
	for(;i1<=N;i1++){
		for(i3=3;i3<=N-i1;i3+=3){
			i2=100-i1-i3;
			//printf("%d,%d,%d\n",i1,i2,i3); //检查用
			if((i1+i2+i3==100) && (i1*5+i2*3+i3/3)==100){
				printf("公鸡有%d只，母鸡有%d只，小鸡有%d只\n",i1,i2,100-i1-i2);
			}
		}
	}
    return 0;
}
