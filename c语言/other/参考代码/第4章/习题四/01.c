#include <stdio.h>
void main()
{
	int i1=0,isum1=0,isum2=0;
	for (;i1<=100;i1++)//isum1Ϊ������isum2Ϊż�� 
	{
		if(i1%2!=0)
			isum1+=i1;
		else
			isum2+=i1;
	}
	printf("1-100������Ϊ%d,ż����Ϊ%d",isum1,isum2);
}
