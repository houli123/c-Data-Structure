#include <stdio.h>
int fnmax(int inum1,int inum2);
int fnmax(int inum1,int inum2)
{
	int i;
	for(i=inum1;i>=1;i--)
		if(inum1%i==0 && inum2%i==0)
			return i;
}      //22190494���� 
int fnmin(int inum1,int inum2);
int fnmin(int inum1,int inum2)
{
	return inum1 * inum2 / fnmax(inum1,inum2);
}
void main()
{
	int inum1,inum2,imax,imin;
	printf("����������������");
	scanf("%d%d",&inum1,&inum2);
	imax=fnmax(inum1,inum2);
	imin=fnmin(inum1,inum2);
	printf("���������%d,��С��������%d",imax,imin);
}
