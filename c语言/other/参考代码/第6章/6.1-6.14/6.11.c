#include <stdio.h>
int fnage(int i);
int fnage(int i)
{
	int iage;
	if(i==1)
		iage=10;
	else 
		iage = fnage(i-1) + 2;
	return iage;
}
//22190494	���� 
void main()
{
	int i=5;
	printf("�������Ϊ%d��",fnage(i)); 
}
