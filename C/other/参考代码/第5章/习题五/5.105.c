#include <stdio.h>
#define N 40
void main()
{
	int iD=0,iX=0,iS=0,iQ=0,i=0;//iD:��д��ĸ, iX:Сд��ĸ, iS:����, iQ:�����ַ� 
	char chead[N];
	printf("������һƪӢ��ѧ�����µı��⣨ֻ����ǰ40���ַ�����\n");
	gets(chead);
	while(chead[i] != '\0')
	{
		if (chead[i]>=65 && chead[i]<=90)
			iD++;
		else if (chead[i]>=97 && chead[i]<=122)
			iX++;
		else if (chead[i]>=48 && chead[i]<=57)
			iS++;
		else
			iQ++;
		i++;
		if(i==N)	
			break;
	}
	printf("��д��ĸ��%d����Сд��ĸ��%d����������%d���������ַ���%d��",iD,iX,iS,iQ);
} 
