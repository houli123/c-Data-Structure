#include <stdio.h>  //����22190494 
void main()
{
	struct student{
		char cName[8];
		int iMiddle,iFinal;
		float fAve;} stA,stB; 
	printf("��������λͬѧ�����������к���ĩ����\n");
	scanf("%s%d%d",stA.cName,&stA.iMiddle,&stA.iFinal);
	scanf("%s%d%d",stB.cName,&stB.iMiddle,&stB.iFinal);
	stA.fAve = (stA.iMiddle + stA.iFinal) / 2.0;
	stB.fAve = (stB.iMiddle + stB.iFinal) / 2.0;
	if (stA.fAve > stB.fAve)
		printf("ƽ���ֽϸߵ���%s,���гɼ�Ϊ%d,��ĩ�ɼ�Ϊ%d,ƽ����Ϊ%.1f",
		stA.cName, stA.iMiddle, stA.iFinal, stA.fAve);
	else
		printf("ƽ���ֽϸߵ���%s,���гɼ�Ϊ%d,��ĩ�ɼ�Ϊ%d,ƽ����Ϊ%.1f",
		stB.cName, stB.iMiddle, stB.iFinal, stB.fAve);
} 
