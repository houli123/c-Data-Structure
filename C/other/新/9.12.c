#include <stdio.h>
#include <malloc.h>
struct node //结点
{
	int iorder;char cname[15],ctel[15];
	struct node *pNext;  //指向下一位的指针域
	
}*phead;

int main(){
	struct node *pTr;
	pTr=(struct node *)malloc(sizeof(struct node));
	//(struct node *)是强制返回结构体类型为node的指针变量,所以相当于指针变量指向结构体变量
	//sizeof(struct node)来计算所需字节数
	phead=pTr;  //使phead指向首结点
	scanf("%d%s%s",&pTr->iorder,pTr->cname,pTr->ctel);
	pTr->pNext=NULL;  //指针域赋值为空
	pTr=phead;
	printf("%d,%s,%s",pTr->iorder,pTr->cname,pTr->ctel);
}
