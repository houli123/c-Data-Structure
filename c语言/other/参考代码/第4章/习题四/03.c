#include <stdio.h>
void main()
{
	int i=1,ii,i1=0,i2=0;float fave,f1,f2;
	printf("请输入全班人数：");
	scanf("%d",&ii);
	for(;i<=ii;i++)
	{
		printf("请输入两个同学的分数：");
		scanf("%f%f",&f1,&f2);
		if((f1+f2)/2>=85)
			i1++;
		else if((f1+f2)/2>=60&&(f1+f2)/2<85)
			i2++;
	}
	printf("优秀学生有%d个，通过学生有%d个",i1,i2);
}
