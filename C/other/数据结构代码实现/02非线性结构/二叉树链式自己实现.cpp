#include <stdio.h>
#include <malloc.h>
#define  Maxsize 100


typedef char elemtype;
//��������洢���弰��������ʵ��
typedef struct node{
	elemtype data;
	struct node *lchild;
	struct node *rchild;
}btNode;
//��������ʵ�ִ���ɾ�����ҽ�㡢�߶ȣ����ӽ�㡢��������ú�������ʵ��
void createBtree(btNode *&b,char *str){
//˼�룺����һ�����ݣ���Ϊһ��ʼ�ǿ���������p��Ϊ���ڵ㣻Ȼ����������ţ���ʾ�����Ǻ��ӽڵ�
//����ʱ��k=1�����������������������Ϊ�����������ж��š�����ʱ��ʾ���ֵܣ�
//�����������ű�ʾ�ò��������������Ҫ�ж�k��ֵ��ѡ���������������������
	int i=0,k,top=-1;
	btNode *p,*stack[Maxsize];  //��btnode���嶼��ָ��
	b=NULL;
	while(str[i]!='\0'){
		switch (str[i]) {
			case '(':
				top++;
				stack[top]=p;
				k=1;
				break;
			case ',':
				k=2;
				break;
			case ')':
				top--;
				break;
			default:
				p=(btNode *)malloc(sizeof(btNode));
				p->data=str[i];
				p->lchild=p->rchild=NULL;
				if(b==NULL)
					b=p;
				else{
					
					
					if(k==1){
						stack[top]->lchild=p;
					}
					else if (k==2){
						stack[top]->rchild=p;
					}
				}
		}
		i++;
	}
}
//ֻ��ɾ���ʹ������������õݹ�
void destroyBtree(btNode *&b){
	free(b->lchild);
	free(b->rchild);
	free(b);
}
void dispBtree(btNode *b){
	if(b!=NULL){
		printf("%c",b->data);
		if(b->lchild!=NULL || b->rchild!=NULL){
			printf("(");
			dispBtree(b->lchild);
			if(b->rchild!=NULL){
				printf(",");
			}
			dispBtree(b->rchild);
			printf(")");
		}
	}
}
//������Ϊ����find������
btNode *findBtree(btNode *b ,elemtype x){
	btNode *p;
	if(b==NULL){
		return NULL;
	}
	else if(b->data==x)
		return b;
	else{
		p=findBtree(b->lchild,x);
		if (p==NULL)
			p=findBtree(b->rchild,x);	
		return p;
	}
}
//Ҫ�з���0��
int BtreeHeight(btNode *b){
	int lchild,rchild;
	if(b==NULL)
		return 0;
	lchild=BtreeHeight(b->lchild);
	rchild=BtreeHeight(b->rchild);
	return (lchild>rchild) ? lchild+1 : rchild+1;
}
btNode *findleft(btNode *b){
	return b->lchild;
}
btNode *findright(btNode *b){
	return b->rchild;
}

int main(){
	btNode *b;
	elemtype ch[]="A(B(D(,G)),C(E,F))";
	createBtree(b,ch);
	printf("b:");
	dispBtree(b);
	printf("\nfind:");
	dispBtree(findBtree(b,'E'));
	printf("\nheight:%d",BtreeHeight(b));
	printf("\nleft:");
	dispBtree(findleft(b));
	printf("\nright:");
	dispBtree(findright(b));
	return 0;
}
