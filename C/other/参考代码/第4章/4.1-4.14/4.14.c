#include <stdio.h>
void main()
{
	int i;  //iΪ���ĸ�����������ֻ�ţ���������ֻ�� 
	for (i=1;i<=35;i++)
		if(i*2+4*(35-i)==94)
			printf("����%dֻ��������%dֻ",i,35-i);
}
