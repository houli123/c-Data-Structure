#include <stdio.h> 
#define N 96
int main(){
	int isum=91,inum=95,i1=1,i2=1,i3=3;//i1������i2ĸ����i3С��
	for(;i1<=N;i1++){
		for(i3=3;i3<=N-i1;i3+=3){
			i2=100-i1-i3;
			//printf("%d,%d,%d\n",i1,i2,i3); //�����
			if((i1+i2+i3==100) && (i1*5+i2*3+i3/3)==100){
				printf("������%dֻ��ĸ����%dֻ��С����%dֻ\n",i1,i2,100-i1-i2);
			}
		}
	}
    return 0;
}
