#include <stdio.h> 

struct itime{
	int ihour,iminute,isecond;
}time;

int main(){
	printf("请输入当前的时间，时、分、秒：");
	scanf("%d%d%d",&time.ihour,&time.iminute,&time.isecond);
	printf("当前的时间为：%d时-%d分-%d秒",time.ihour,time.iminute,time.isecond);
    return 0;
}
