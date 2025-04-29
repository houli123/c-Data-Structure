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

//�������ĵݹ�����㷨�����صĽ���Ǳ��������У�û�����Ŷ��ţ���ͬ�����
//�������
void preOrder(btNode *b){
	if(b!=NULL){
		printf("%c",b->data);  //���ʽ��
		preOrder(b->lchild);  //�ݹ�������
		preOrder(b->rchild);  //�ݹ�������
	}
}
//�������
void inOrder(btNode *b){
	if(b!=NULL){
		inOrder(b->lchild);  //�ݹ�������
		printf("%c",b->data);  //���ʽ��
		inOrder(b->rchild);  //�ݹ�������
	}
}
//�������
void postOrder(btNode *b){
	if(b!=NULL){	
		postOrder(b->lchild);  //�ݹ�������
		postOrder(b->rchild);  //�ݹ�������
		printf("%c",b->data);  //���ʽ��
	}
}

//�������ķǵݹ�����㷨������ջ
//ǰ�����˳���ǣ���-��-��
//�ȴ�ӡ���ڵ��ֵ������ջ���Ƚ�����������Ƚ� �������Ž�ȥ���ٽ��������Ž�ȥ
void preOrder2(btNode *b){
	int top=0;
	btNode *stack[Maxsize],*p=b;
	if(!p){
		printf("empty");
		return;
	}
	stack[top]=p;  //�����ڵ���ջ���Ա����ȳ����ڵ�
	while(top>-1){
		p=stack[top--];  //��ջ������
		printf("%c",p->data);
		
		// �Ȱ��������Ž�ȥ�ٷ�������������ÿ�γ��Ķ���������������ֻʣ����������һ�ε���
		if(p->rchild)
			stack[++top]=p->rchild;
		if(p->lchild)
			stack[++top]=p->lchild;
	}
}
//��������ķǵݹ鷽ʽʵ��˼���ǣ�
//1. �Ӹ���㿪ʼ����������ͬʱѹջ��������������˵����ǰ�����Ľ��û�����ӣ�
//2. ��ջ��ȡ�������ò���������Ȼ����ʸý����Һ��ӣ����������ظ��ԵĲ�����
void inOrder2(btNode *b){
	int top=0;
	btNode *stack[Maxsize],*p=b;
	if(!p){
		printf("empty");
		return;
	}
	while(p||top>0){
		while(p){  //���Ÿ������ӣ�������ջ��ֱ������Ϊ��
			stack[++top]=p;
			p=p->lchild;
		}
		p=stack[top--];  //��ջ������
		printf("%c",p->data);
		p=p->rchild;  //������Һ��ӣ��������ʸ��Һ��ӵ�����
	}
}
//�����������Ϊ���ӵķ�����
//ԭ����ջ˳���ȸ������������������
//ÿ���һ����㣬��have_visit�Ѿ����������������Ϊ����Ľ��������¼�����Է��ظ����
//����pҪ��գ���ֹ������ջ
void postOrder2(btNode *b){
	int top=0;
	btNode *stack[Maxsize],*p=b,*have_visited=NULL;
	if(!p){  //����
		printf("empty");
		return;
	}
	while(p||top>0){
		while(p){  //���ڵ�����ջ�����������ջ
			stack[top++]=p;
			p=p->lchild;
		}
		p=stack[top-1];  //����pΪ��Ҷ�ӽ��
		//����ý��û����������ֱ������ý�㡣����������ҽ��
		//����������ջ�������ȳ�����������
		if(p->rchild==NULL || p->rchild==have_visited){  //���û���Һ������ʾ��Ҷ�ӽڵ㣬����Ҫ�ڶ��η��ʸý��������
			printf("%c",p->data);
			top--;
			have_visited=p;
			p=NULL;
		}
		else
			p=p->rchild;  //
	}
}
//�����������Ϊ�򵥵ķ�����
//������->��->��
//��ô���԰Ѻ���������->��->������ٷ�ת�������ɡ�
//����������ʹ�õ�ջ�������ȱ�����ڵ㣬 Ȼ���ȷŽ�ȥ ��ڵ㣬�ٷ� ��ȥ �ҽڵ�
void postOrder3(btNode *b){
	int top=1,count=0;elemtype array[Maxsize];  // ʹ��һ���������������ݣ������������ķ�ת
	//count�����������Ľ����
	btNode *stack[Maxsize],*p;
	if(!b){  //����
		printf("empty");
		return;
	}
	stack[top]=b;
	while(top>0){
		p=stack[top--];
		array[count++]=p->data;
		if(p->lchild!=NULL)
			stack[++top]=p->lchild;
		if(p->rchild!=NULL)
			stack[++top]=p->rchild;	
		}
	for(int i=count-1;i>=0;i--)
		printf("%c",array[i]);
}

//�������Ĳ�α����㷨�����ö���
void levelOrder(btNode *b){
	if(!b){  //����
		printf("empty");
		return;
	}
	btNode *stack[Maxsize],*p=b;
	int front=0,rear=0;  //���ζ���
	stack[rear++]=p;
	while(front!=rear){  //���в���
		p=stack[front++];
		printf("%c",p->data);
		if(p->lchild)
			stack[rear++]=p->lchild;
		if(p->rchild)
			stack[rear++]=p->rchild;
	}
}

//��ǰ��������������й����������
btNode * createBt(char *pre,char *in,int n){   //nΪ������������
	btNode *b;elemtype *p;int k;
	if(n<=0)
		return NULL;
	b=(btNode *)malloc(sizeof(btNode));
	b->data=*pre;   //����Ⱥ��ұ������˼�������ַ������Ǿ��Ǹ��ַ��������飩��һλA
	for (p=in;p<in+n;p++)  //����p�ĳ�ʼֵ��D
		if(*p==*pre)  //��ʱpΪin�и��ڵ��λ��
			break;
	k=p-in;  //�൱��������ڵ��������е��±�
	b->lchild=createBt(pre+1,in,k);  //pre+1������A��ǰ������
	b->rchild=createBt(pre+k+1,p+1,n-k-1);  
	//pre+k+1��ǰ��������е����������в��֣�p+1�������������������֣�n-k-1��Ϊk���±��0��ʼ
	return b;
}
//�ɺ���������������й����������
btNode * createBt2(char *post,char *in,int n){   //nΪ������������
	btNode *b;elemtype *p,r;int k;
	if(n<=0)
		return NULL;
	r=*(post+n-1);   //r�Ǹ����ֵ
	b=(btNode *)malloc(sizeof(btNode));
	b->data=r;  
	for (p=in;p<in+n;p++)  //����p�ĳ�ʼֵ��D
		if(*p==r)  //��ʱpΪin�и��ڵ��λ��
			break;
	k=p-in;  //�൱��������ڵ��������е��±�
	b->lchild=createBt2(post,in,k);  //����������
	b->rchild=createBt2(post+k,p+1,n-k-1);    //����������
	return b;
}

int main(){
	btNode *b;
	elemtype ch[]="A(B(D(,G)),C(E,F))";
	createBtree(b,ch);
	printf("b:");
	dispBtree(b);
	printf("\npreOrder��b:");
	preOrder(b);
	printf("\ninOrder��b:");
	inOrder(b);
	printf("\npostOrder��b:");
	postOrder(b);
	printf("\n------------------------------------\npreOrder2��b:");
	preOrder2(b);
	printf("\ninOrder2��b:");
	inOrder2(b);
	printf("\npostOrder2��b:");
	postOrder2(b);
	printf("\npostOrder3��b:");
	postOrder3(b);
	printf("\nleverOrder��b:");
	levelOrder(b);
	printf("\n-------------------------------------\nǰ������");
	dispBtree(createBt("ABDGCEF","DGBAECF",7));
	printf("\n��������");
	dispBtree(createBt2("GDBEFCA","DGBAECF",7));
	return 0;
}
