#include <stdio.h>
void main()
{
	int i1,i2,i3;
	for (i1=1;i1<=9;i1++)  
	//for��Ƕ�׼���žų˷��� 
	{
		for (i2=1;i2<=i1;i2++)  //for�ĵڶ��� 
		{
			printf("%d*%d=%d  ",i2,i1,i1*i2);
			if(i1*i2<10)
				printf(" ");
		}
		printf("\n");
	}
}
