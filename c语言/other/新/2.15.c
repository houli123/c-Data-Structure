#include <stdio.h>
#define pai 3.1415926 
int main(){
	float fr,fp,fs;
	printf("������뾶��");
	scanf("%f",&fr);
	fp=2*pai*fr;
	fs=pai*fr*fr;
	printf("�ܳ���%0.2f�������%.2f",fp,fs);
    return 0;
}
