#include <stdio.h>
#define size 10
void main()
{
	int iContest[size]={88,97,91,99,68,85,84,80,77,73},i,ifind;
	printf("������һ�����֣�");
	scanf("%d",&ifind);
	for(i=0;i<size;i++)
		if(iContest[i]==ifind)
			{
				printf("�ɼ�Ϊ%d��ѧ���ǵ�%d��ѧ��",ifind,i+1);
				break;
			}
}
