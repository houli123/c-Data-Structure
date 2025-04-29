#include <stdio.h>
float fnave(float fstu[]);
float fnave(float fstu[])
{
	int i;
	float fsum=0;
	for(i=0;i<10;i++)
		fsum+=fstu[i];
	return fsum/10;
}

void fnadd(float fstu[]);
void fnadd(float fstu[])
{
	int i;
	for(i=0;i<10;i++)
		fstu[i]+=5;
}

void main()
{
	//平均分 
	int i;
	float fstu[10],fave;
	printf("请输入10名学生的成绩：");
	for(i=0;i<10;i++)
		scanf("%f",&fstu[i]);
	fave=fnave(fstu);
	printf("平均分为%.2f",fave);
	//加分 
	printf("\n每个人加完5分后的成绩为：");
	fnadd(fstu);
	for(i=0;i<10;i++)
		printf("\n%f.2",fstu[i]);
} 
