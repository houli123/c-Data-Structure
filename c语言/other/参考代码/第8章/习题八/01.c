#include <stdio.h> 

struct itime{
	int ihour,iminute,isecond;
}time;

int main(){
	printf("�����뵱ǰ��ʱ�䣬ʱ���֡��룺");
	scanf("%d%d%d",&time.ihour,&time.iminute,&time.isecond);
	printf("��ǰ��ʱ��Ϊ��%dʱ-%d��-%d��",time.ihour,time.iminute,time.isecond);
    return 0;
}
