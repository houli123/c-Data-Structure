#include <stdio.h> 
#include <math.h>
int fnGetBits(int ivalue,int ibegin,int iend){
	int i=ibegin,inum=0x0000;
	for(;i<=iend;i++){
		inum+=pow(2,i);
	}
	ivalue&=inum;
	return ivalue;
}

int main()
{
	int ivalue,ibegin,iend;
	printf("请输入要处理的数：");
	scanf("%x",&ivalue);
	printf("请输入要取第几位到第几位：");
	scanf("%d%d",&ibegin,&iend);
	printf("原始数据为：%x\n",ivalue);
	printf("取出后的数据为：%x",fnGetBits(ivalue,ibegin,iend));
    return 0;
}
