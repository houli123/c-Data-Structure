#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define  Maxsize 100

typedef char elemtype;
//��������洢���弰��������ʵ��
typedef struct node{
	elemtype data;
	int ltag,rtag;  //0��ʾ���������ֵܣ�1��ʾ����ǰ���Һ��
	struct node *lchild;
	struct node *rchild;
}btNode;

//����������˼��ʵ��
void createBtree(btNode *&b,char *str){
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

//�����������������߱������ж�����ָ���Ƿ�Ϊ�գ����Ϊ�վ���������
//����������
btNode *pre;
void inthread(btNode *&p){   //һ��ʼ���ݽ���b����㣬��ÿһ������������������ǰ����̣�����Ҫ������
	if(p){
		inthread(p->lchild);  //�����������У��ȶ�������������
		if(p->lchild==NULL){  //��ָ��Ϊ�գ���ָ����ǰ��
			p->lchild=pre;   
			p->ltag=1;
		}
		else
			p->ltag=0; 
		if(pre->rchild==NULL){  //��ָ��Ϊ�գ���ָ������
			pre->rchild=p;
			pre->rtag=1;
		}
		else
			pre->rtag=0;
		pre=p;
		inthread(p->rchild);  //��������������
	}
}
btNode *createThread(btNode *b){   //������������������
	btNode *root;  //����ͷ���
	root=(btNode *)malloc(sizeof(btNode));
	root->ltag=0;    //ͷ�������������ӣ����и���㣬�Ƿǿ���
	root->rtag=1;   //ͷ���û���ֵܽ��
	root->rchild=b;   //ͷ������Ǹ����
	if(b==NULL)   //����
		root->rchild=root;
	else{
		root->lchild=b;  //����ͷ���������Ǹ����
		pre=root;   //preʼ����p��ǰ����㣬����������
		inthread(b);
		pre->rchild=root;   //��preָ�����һ�����ʱ������������ָ�롣������=root��������NULL
		pre->rtag=1;
		root->rchild=pre;
	}
	return root;
}
void thInOrder(btNode *tb)   //�����������������������
{
	btNode *p=tb->lchild;		//ָ����ڵ㣬tb��ͷ���
	while (p!=tb)		
	{
		while (p->ltag==0)   //��ָ����ڣ���������
			p=p->lchild;     //�ߵ�����
		printf("%c",p->data);
		while (p->rtag==1 && p->rchild!=tb)   //���������ָ��Ϊ�գ������ָ��������̽�㡣���ý�������һ����㣬��ô����ָ�����ͷ��㣬����������������ѭ��
		{
			p=p->rchild;
			printf("%c",p->data);
		}
		p=p->rchild;
	}
}

int main(){
	btNode *b;
	elemtype ch[]="A(B(D(,G)),C(E,F))";
	createBtree(b,ch);
	printf("b:");
	dispBtree(b);
	printf("\n��������������������:");
	thInOrder(createThread(b));
	return 0;
}
