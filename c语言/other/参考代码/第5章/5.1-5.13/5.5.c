#include <stdio.h>
#define size 6
void main()
{
	int iStu[size],i,itemp,k;
	printf("������%d��ѧ���ĳɼ���",size);
	for(i=0;i<size;i++)
		scanf("%d",&iStu[i]);
	for(k=1;k<size;k++)
		for(i=size-1;i>=k;i--)
			if(iStu[i]<iStu[i-1])
			{
				itemp=iStu[i-1];
				iStu[i-1]=iStu[i];
				iStu[i]=itemp;
			}
	printf("����õ�����Ϊ��\n");
	for(i=0;i<size;i++)
		printf("%d  ",iStu[i]);
}
