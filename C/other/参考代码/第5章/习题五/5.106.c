#include <stdio.h>
#define N 100
void main()
{
	char ctext[N];int i=0;
	printf("�������������(100���ַ���)��\n");
	gets(ctext);
	printf("ԭʼ��������Ϊ��\n");
	puts(ctext);
	while(ctext[i]!='\0')
	{
		if(ctext[i]>='A' && ctext[i]<='Z')
			ctext[i]=155-ctext[i]; 
		else if(ctext[i]>=97 && ctext[i]<=122)
			ctext[i]=219-ctext[i];
		i++; 
	}
	printf("������������Ϊ��\n");
	puts(ctext);
}
