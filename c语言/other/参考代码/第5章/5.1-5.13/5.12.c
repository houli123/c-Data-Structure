#include <stdio.h>
void main()
{
	char cIdiom1[80],cIdiom2[80],cIdiom3[80];
	int i=0,j=0,h=0;
	printf("�������һ�����");
	gets(cIdiom1);
	printf("������ڶ������");
	gets(cIdiom2);
	printf("��������������");
	gets(cIdiom3);
	while(cIdiom1[i]!='\0')
		i++;
	while(cIdiom2[j]!='\0')
	{
		cIdiom1[i+j]=cIdiom2[j];j++;
	}
	cIdiom1[i+j]='\n';
	while(cIdiom3[h]!='\0')
	{
		cIdiom1[i+j+h+1]=cIdiom3[h];h++;
	}
	cIdiom1[i+j+h+1]='\0';
	printf("��������֮���ǣ�%s",cIdiom1);
}
