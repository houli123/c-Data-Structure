#include <stdio.h>
int iprize(int iscore);
int iprize(int iscore)
{
	int i;
	for(i=0;i<10;i++)
	{
		if(iscore >= 90 && iscore <=100)
			return 1;
		else if(iscore >= 80 && iscore <=89)
			return 2;
		else if(iscore >= 60 && iscore <=79)
			return 3;
		return 4;
	}
}
void main()
{
	int i,iscore[10];
	printf("������10��ͬѧ�ĳɼ���");
	for(i=0;i<10;i++)
		scanf("%d",&iscore[i]);
	for(i=0;i<10;i++)
	{
		if(iprize(iscore[i]) == 1)
			printf("%d�� һ�Ƚ�\n",i+1,iprize(iscore[i]));
		else if(iprize(iscore[i]) == 2)
			printf("%d�� ���Ƚ�\n",i+1,iprize(iscore[i]));
		else if(iprize(iscore[i]) == 3)
			printf("%d�� ���Ƚ�\n",i+1,iprize(iscore[i]));	
		else
			printf("%d���޽���\n",i+1);
	}
		
}
