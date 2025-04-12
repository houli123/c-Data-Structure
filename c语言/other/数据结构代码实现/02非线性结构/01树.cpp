#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100
#define Maxsons 100 //Ϊ��ຢ�ӽ����������Ϊ���Ķ�

typedef int elemtype;
//˫��˳��洢�ṹ
typedef struct{
	elemtype data;  //����ֵ
	int parent;  //˫�׵�λ��
}ptree[Maxsize];  //Ϊ˫�״洢�ṹ����
//������ʽ�洢�ṹ
typedef struct node{
	elemtype data;
	struct node *sons[Maxsons];  //ָ���ӽ�㣬��ʾÿ��������Ķ���
}TSonNode;
//�����ֵ����洢�ṹ
typedef struct tnode{
	elemtype data;
	struct tnode *hp;  //ָ���ֵ�
	struct tnode *vp;  //ָ���ӽ��
}TsbNode;

TSonNode *CreateTree(char *str)			//��str�����������洢�ṹ
{	struct{	
		TSonNode *nodep;				//�ڵ�ָ��
		int num;						//���Ӹ���
	} St[Maxsize];						//����˳��ջ
	int top=-1;							//ջ��ָ��
	int i=0,j; 
	char ch=str[i];
	TSonNode *t=NULL,*p;
	while (ch!='\0')
	{	switch(ch)
		{
		case '(': 
			top++; 
			St[top].nodep=p;
			St[top].num=0;				//��ǰ�ڵ�*p��ջ
			break;
		case ')':
			top--;	
			break;			//��ջ
		case ',':
			St[top].num++; 
			break;	//ջ���ڵ�����һ������
		default:
			p=(TSonNode *)malloc(sizeof(TSonNode));
			p->data=ch;					//����һ���ڵ�p���ch
			for (j=0;j<Maxsons;j++)		//���к���ָ����ΪNULL
				p->sons[j]=NULL;
			if (t==NULL)				//ԭΪ����
				t=p;
			else						//������Ϊջ���ڵ��һ������
				St[top].nodep->sons[St[top].num]=p;
			break;
		}
		i++;
		ch=str[i];
	}
	return t;
}
void DispTree(TSonNode *t)				//����������洢�ṹ
{	int i;
	if (t!=NULL)
	{	printf("%c",t->data);
		if (t->sons[0]!=NULL)			//t�ڵ�������һ������
		{	printf("(");				//���һ��������
			for (i=0;i<Maxsons;i++)
			{	DispTree(t->sons[i]);
				if (t->sons[i+1]!=NULL)	//�������һ������
					printf(",");		//���һ��','
				else					//���û����һ������
					break;				//�˳�ѭ��
			}
			printf(")");				//���һ��������
		}
	}
}
void DestroryTree(TSonNode *&t)			//������t
{	int i;
	if (t!=NULL)
	{	for (i=0;i<Maxsons;i++)
		{	if (t->sons[i]!=NULL)		//������
				DestroryTree(t->sons[i]);//���ٸ�����
			else						//��û������
				break;					//�˳�ѭ��
		}
		free(t);						//�ͷŸ��ڵ�
	}
}
//���⣺�Ժ������洢�ṹ�����һ�������ĸ߶�t�ĵݹ��㷨
int treeheight(TSonNode * t){
	TSonNode *p;
	int i,h,maxh=0;
	if(t==NULL)
		return 0;
	for(i=0;i<Maxsons;i++){    //pָ��t�ĵ�i+1�����ӽ��
		p=t->sons[i];
		if(p!=NULL){
			h=treeheight(p);  //���Ӧ�����ĸ߶�
			if(maxh<h)
				maxh=h;
		}
	}
	return (maxh+1);  //�������ĸ߶�
}
//�Ժ����ֵ�����Ϊ���Ĵ洢�ṹ���һ������t�߶ȵĵݹ��㷨
int treeheight2(TsbNode *t){
	TsbNode *p;
	int h,maxh=0;
	if(t==NULL)
		return 0;
	p=t->vp;   //pָ���1�����ӽ��
	while(p!=NULL){
		h=treeheight2(p);
		if(maxh<h)
			maxh=h;
		p=p->hp;    //�������������ֵܣ�����������
	}
	return(maxh+1);
	
}

int main(){
	TSonNode *t;
	t=CreateTree("A(B,C(E,F,G),D)");
	printf("t:"); DispTree(t);
	printf("\n��t�����߶�:%d\n",treeheight(t));
	DestroryTree(t);
	
	return 0;
}
