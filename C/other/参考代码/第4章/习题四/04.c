#include <stdio.h>
void main()
{
	int i=1,i1,i2=0,i3=0,i0=0;
	//i1为每次输入的数，i2为正数，i3为负数，i0为0的个数 
	for(;i<=10;i++)
	{
		printf("请输入第%d个数",i); 
		scanf("%d",&i1);
		if(i1>0)
			i2++;
		else if(i1<0)
			i3++;
		else
			i0++;
	}
	printf("正数有%d个，负数有%d个，0的个数有%d个",i2,i3,i0);
}
