#include <stdio.h>
#include <malloc.h>
#include <string.h>
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



//7.11�ö������ṹ�洢������һ�Ŷ����������н�����
int countBtree(btNode *b){
	if(b==NULL)
		return 0;
	else{
		return countBtree(b->lchild)+countBtree(b->rchild)+1;
	}
}
//7.12���һ�Ŷ���������Ҷ�ӽ��
//�ҵ�
void dispZeroNode(btNode *b){
	if(b->lchild==NULL && b->rchild==NULL)
		dispBtree(b);
	else{
		if (b->lchild!=NULL)
			dispZeroNode(b->lchild);
		if (b->rchild!=NULL)
			dispZeroNode(b->rchild);
	}
}
//���
void displeaf(btNode *b){
	if(b!=NULL){
		if(b->lchild==NULL && b->rchild==NULL)
			printf("%c,",b->data);
		displeaf(b->lchild);
		displeaf(b->rchild);
	}
}


//7.13�������b�н��ֵΪx�Ľ��Ĳ�Σ���дһ�������ĳ��򣬶����û�������κν��ֵ���������
//�ҵ�
int level(btNode *b,elemtype x,int h){
	if(b==NULL)   //��Ҫ��NULL�ŵ�һ���ж���
		return 0;
	else if(b->data==x)
		return h;  //�ҵ����򷵻ص�ǰ�ĸ߶�
	else{
		if(level(b->lchild,x,h+1)!=0)  //��ʾ���������ҵ���
			return level(b->lchild,x,h+1);  //��1�ǻ�Ҫ���ϸ���㣬����ֻ�ǵ����������ĸ߶�
		else    //������û�У��Ǿ�ֻ��ȥ����������
			return level(b->rchild,x,h+1);
			
//һ��ʼ�Ĵ���д��
//		if(b->lchild!=NULL)    //��ֻ��֤������������������������Ҷ�ӽ�㻹�ǻ᷵��0��
//			return level(b->lchild,x,h+1);
//		if(b->rchild!=NULL)    //��ֻ��֤������������������������Ҷ�ӽ�㻹�ǻ᷵��0��
//			return level(b->rchild,x,h+1);
	}
}
//���ϵ�7.13
int Level(btNode *b,elemtype x,int h)	//h�ó�ֵ1
{	int l;
	if (b==NULL)
		return(0);
	else if (b->data==x)
		return(h);
	else
	{	l=Level(b->lchild,x,h+1);	//���������в���
		if (l!=0)  //��ʾ�ڸ��������ҵ���
			return(l);
		else						//����������δ�ҵ�,�����������в���
			return(Level(b->rchild,x,h+1));
	}
}

//7.14��������е�k��Ľ�����
void BtreeNodeNum(btNode *b,int h,int k,int &n){
	if(!b)
		return;
	if(h==k)
		n++;
	else if(h<k){
		BtreeNodeNum(b->lchild,h+1,k,n);
		BtreeNodeNum(b->rchild,h+1,k,n);
	}
}
//7.15�ж����Ŷ������Ƿ�����  p231
//7.16���һ�����ֵΪx�Ľ����������ȵ��㷨
//7.17  p239
//7.18  p241
//7.19  p246


int main(){
	btNode *b;
	int n=0,k=3;
	elemtype ch[]="A(B(D(,G)),C(E,F))",x;
	createBtree(b,ch);
	printf("b:");
	dispBtree(b);
	printf("\nb�Ľ�����Ϊ:%d",countBtree(b));
	printf("\n�ҵģ�Ҷ����:");
	dispZeroNode(b);
	printf("\n��ģ�Ҷ����:");
	displeaf(b);
	
	
//	while(1){
//		printf("\n������Ҫ��߶ȵĽ�㣨0�˳�����");
//		x=getchar();
//		fflush(stdin);  //�����������ʱ�Ļس���
//		if(x=='0')
//			break;
//		printf("\n�ҵģ�ֵΪ%c�Ľ��߶�Ϊ:%d",x,level(b,x,1));
//		printf("\n�飺ֵΪ%c�Ľ��߶�Ϊ:%d",x,Level(b,x,1));
//		printf("\n-----------------------------------");
//	}
	BtreeNodeNum(b,1,k,n);
	printf("\n----------------------------\n��%d����%d�����",k,n);
	return 0;
}
