#include <stdio.h>
#define pai 3.1415926 
int main(){
	float fr,fp,fs;
	printf("请输入半径：");
	scanf("%f",&fr);
	fp=2*pai*fr;
	fs=pai*fr*fr;
	printf("周长：%0.2f，面积：%.2f",fp,fs);
    return 0;
}
