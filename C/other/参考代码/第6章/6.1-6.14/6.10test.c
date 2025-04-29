#include <stdio.h>
int fnmax(int i1,int i2,int i3)
{
	int imax;
	if(i1>=i2){
		if(i1>i3){
			imax=i1;
		}else{
			imax=i3;
		}
	}else{
		if(i2>i3){
			imax=i2;
		}else{
			imax=i3;
		}
	}
	return imax;
}

int fnmin(int i1,int i2,int i3)
{
	
	int imin;
	if(i1<i2){
		if(i1>i3){
			imin=i3;
		}else{
			imin=i1;
		}
	}else{
		if(i2>i3){
			imin=i3;
		}else{
			imin=i2;
		}
	}
	return imin;
}

int fncha(int i1,int i2,int i3)
{
	return fnmax(i1,i2,i3) - fnmin(i1,i2,i3);
}

int main()
{
	int i1,i2,i3;
	scanf("%d%d%d",&i1,&i2,&i3);
	printf("最大值和最小值的差为%d",fncha(i1,i2,i3));
}
