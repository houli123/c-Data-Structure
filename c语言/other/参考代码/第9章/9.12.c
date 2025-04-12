#include "stdio.h"
#include "malloc.h"
struct node{
	int iOrder;
	char chName[15];
	char chTel[15];
	struct node *pNext;
}; 
struct node *pHead;
void main()
{
	struct node *pTr;
	pTr=(struct node *)malloc(sizeof(struct node));
	pHead=pTr;
	scanf("%d%s%s",&pTr->iOrder,pTr->chName,pTr->chTel);
	pTr->pNext=NULL;
	pTr=pHead;
	printf("%d\n%s\n%s\n",pTr->iOrder,pTr->chName,pTr->chTel); 
}
