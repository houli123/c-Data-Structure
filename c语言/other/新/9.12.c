#include <stdio.h>
#include <malloc.h>
struct node //���
{
	int iorder;char cname[15],ctel[15];
	struct node *pNext;  //ָ����һλ��ָ����
	
}*phead;

int main(){
	struct node *pTr;
	pTr=(struct node *)malloc(sizeof(struct node));
	//(struct node *)��ǿ�Ʒ��ؽṹ������Ϊnode��ָ�����,�����൱��ָ�����ָ��ṹ�����
	//sizeof(struct node)�����������ֽ���
	phead=pTr;  //ʹpheadָ���׽��
	scanf("%d%s%s",&pTr->iorder,pTr->cname,pTr->ctel);
	pTr->pNext=NULL;  //ָ����ֵΪ��
	pTr=phead;
	printf("%d,%s,%s",pTr->iorder,pTr->cname,pTr->ctel);
}
