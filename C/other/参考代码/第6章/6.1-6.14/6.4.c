#include <stdio.h>
int fnMax(int inum1,int inum2);
int fnMax(int inum1,int inum2)
{
	if(inum1>inum2)
		return inum1;
	else
		return inum2;
}
void main()
{
	int inum1,inum2,inum3,imax;
	printf("�����������˵���ߣ�");
	scanf("%d%d%d",&inum1,&inum2,&inum3);
	imax=fnMax(inum1,inum2);
	imax=fnMax(imax,inum3);
	printf("%d %d %d�����ֵ��%d",inum1,inum2,inum3,imax);
}
