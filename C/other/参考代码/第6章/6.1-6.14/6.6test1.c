#include <stdio.h> 
#define N 10
int fnjudge(int iscore){
	if(iscore>=90 && iscore<=100)
		return 1;
	else if(iscore>=80 && iscore<90)
		return 2;
	else if(iscore>=60 && iscore<80)
		return 3;
	else if(iscore>=0 && iscore<60)
		return 4;
	else
		return 0;
}
int main()
{
	int i,iscore[N],iflat;
	for(i=0;i<10;i++){
		scanf("%d",&iscore[i]);
	}
	for(i=0;i<10;i++){
		iflat=fnjudge(iscore[i]);
		switch(iflat){
			case 1:
				printf("一等奖\n");break;
			case 2:
				printf("二等奖\n");break;
			case 3:
				printf("三等奖\n");break;
			case 4:
				printf("无奖\n");break;
			default:
				printf("错误输入\n");
		}
	}	
    return 0;
}
