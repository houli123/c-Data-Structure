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
void main()
{
	int i;
	float fstu[10],fave;
	printf("������10��ѧ���ĳɼ���");
	for(i=0;i<10;i++)
		scanf("%f",&fstu[i]);
	fave=fnave(fstu);
	printf("ƽ����Ϊ%.2f",fave);
} 
