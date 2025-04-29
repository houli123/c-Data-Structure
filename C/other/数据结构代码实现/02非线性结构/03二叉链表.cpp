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

//����������˼��ʵ��
void createBtree(btNode *&b,char *str){
//˼�룺����һ�����ݣ���Ϊһ��ʼ�ǿ���������p��Ϊ���ڵ㣻Ȼ����������ţ���ʾ�����Ǻ��ӽڵ�
//����ʱ��k=1�����������������������Ϊ�����������ж��š�����ʱ��ʾ���ֵܣ�
//�����������ű�ʾ�ò��������������Ҫ�ж�k��ֵ��ѡ���������������������

	btNode *st[Maxsize],*p;  //st����Ϊ˳��ջ
	int top=-1,k,j=0;    //topΪջ��ָ��
	char ch;
	b=NULL;   //��ʼʱ������Ϊ��
	ch=str[j];
	while(ch!='\0'){
		switch (ch) {
			case '(':  //�������ӽ��
				top++;   //��ջ�ȼӺ������
				st[top]=p;
				k=1;
				break;
			case ')':   //ջ�����������������
				top--;   //����ֱ�Ӳ���ջ�ˣ���ָ���1�����֮����������ջ�����ԭ�����ڵ�
				break;
			case ',':
				k=2;  //��ʼ�����Һ��ӽ��
				break;
			default:
				p=(btNode *)malloc(sizeof(btNode));
				p->data=ch;
				p->lchild=p->rchild=NULL;   //ָ���ʼ��
				if(b==NULL)
					b=p;   //���ǿ�������p��Ϊ���ڵ�
				else{
					switch(k){
						case 1:   //�½������Ϊջ����������
							st[top]->lchild=p;
							break;
						case 2:   //�½������Ϊջ�������Һ���
							st[top]->rchild=p;
							break;
					}
				}
		}
		j++;
		ch=str[j];
	}
}
void dispBtree(btNode *b){
	if(b!=NULL){
		printf("%c",b->data);
		if(b->lchild!=NULL || b->rchild!=NULL){
			printf("(");
			dispBtree(b->lchild);  //�ݹ�������
			if(b->rchild!=NULL)
				printf(",");   //���������������Ӷ���
			dispBtree(b->rchild);  //�ݹ�������
			printf(")");
		}
	}
}
void destroyBtree(btNode *&b){
	if(b!=NULL){
		free(b->lchild);
		free(b->rchild);
		free(b);
	}
}
btNode *findBtree(btNode *b,elemtype x){
	btNode *p;
	if(b==NULL)
		return NULL;
	else if(x==b->data)
		return b;
	else{
		//������p�����������Ĳ��ҽ���������������
		//��pΪNULL��������ֻ��һ����㣬�ҵ���x
		//�򷵻ظý�㣬�����ӽڵ�������ݹ�
		p=findBtree(b->lchild,x);
		if(p!=NULL)
			return p;
		else
		//���������������򷵻��������Ĳ��ҽ��
			return findBtree(b->rchild,x);
	}
}
btNode * lchildNode(btNode *b){
	return b->lchild;
}
btNode * rchildNode(btNode *b){
	return b->rchild;
}
int btHeight(btNode *b){
	int lchild,rchild;  //�ֱ��¼���������ĸ�
	if(b==NULL)
		return 0;
	else{  //����������߶Ȳ����������ֵ�����ô����
		lchild=btHeight(b->lchild);
		rchild=btHeight(b->rchild);
		//��������������ʱ����ʱ�߶Ⱦ���1
		return (lchild>rchild) ? (lchild+1) : (rchild+1 );
	}
}


int main(){
	btNode *b,*p;
	elemtype ch[]="A(B(D(,G)),C(E,F))";
	createBtree(b,ch);
	printf("b:");
	dispBtree(b);
	printf("\nfind:");
	dispBtree(findBtree(b,'F'));
	printf("\nheight:%d",btHeight(b));
	printf("\nleft:");
	dispBtree(lchildNode(b));
	printf("\nright:");
	dispBtree(rchildNode(b));
	return 0;
}
