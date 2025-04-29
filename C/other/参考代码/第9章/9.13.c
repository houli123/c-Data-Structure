#include "malloc.h"
#include "stdio.h"
struct node{
	int iOrder;
	char chName[15];
	char chTel[15];
	struct node *pNext;
};
struct node *pHead;
void fnCreate()
{
	struct node *pFront,*pBack;
	int i,iNum;
	printf("Please input a number:");
	scanf("%d",&iNum);
	for(i=0;i<iNum;i++)
	{
		pFront=(struct node *)malloc(sizeof(struct node));
		if(i==0)
			pHead=pFront;
		else
			pBack->pNext=pFront;
		scanf("%d%s%s",&pFront->iOrder,pFront->chName,pFront->chTel);
		pFront->pNext=NULL;
		pBack=pFront;
	}
}
void fnPrint()
{
	struct node *pFront;
	pFront = pHead;
	while(pFront!=NULL)
	{
		printf("\nID:%d,name:%s,tel:%s\n",pFront->iOrder,pFront->chName,pFront->chTel);
		pFront=pFront->pNext;
	}
}
void main()
{
	fnCreate();
	fnPrint();
}
