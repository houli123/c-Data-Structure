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
void fnDelete(int iNo)
{
	struct node *pFront,*pBack,*pTemp=NULL;
	pFront=pBack=pHead;
	while(pFront!=NULL)
	{
		if(pFront->iOrder==iNo)
		{
			pBack=pFront->pNext;
			pTemp=pFront;
			break;
		}
		pBack=pFront;
		pFront=pFront->pNext;
	}
	if(pTemp==pHead)
		pHead=pBack;
	if(pTemp==NULL)
		printf("\n not find");
	else 
		free(pTemp);
}
void main()
{
	int iNo,i;
	while(1)
	{
		clrscr();
		printf("\n\n 1--add 2--del 3--print 4--exit\n");
		printf("\n\n Select Operation(0--4):");
		scanf("%d",&i);
		if(i==4) break;
		switch(i)
		{
			case 1:fnCreate();
					break;
			case 2:scanf("%d",&iNo);
					fnDelete(iNo);
					break;
			case 3:fnPrint();
					break;
			default:break;
		}
	}
}
