#include "stdio.h"
int main()
{
	char cString[30];
	int i,iA=0;
	for(i=0;i<7;i++)
		scanf("%c",&cString[i]);
	for(i=0;i<7;i++)
	{
		printf("%c",cString[i]);
		if(cString[i]=='a')
			iA++;
	}
	if(iA<3)
		printf("�Ƚ�����");
	else if (iA>=3&&iA<=5)
		printf("��������");
	else if(iA>5)
		printf("������˳������ǿӲ");
		
	return 0;
}
