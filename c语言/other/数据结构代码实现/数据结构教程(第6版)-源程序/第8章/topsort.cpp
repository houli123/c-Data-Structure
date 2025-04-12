//���������㷨
#include "graph.cpp"
#define MaxSize 100
//-----ջ�Ļ��������㷨--------------- 
typedef int ElemType;
typedef struct 
{	
	ElemType data[MaxSize];
	int top;				//ջָ��
} SqStack;					//˳��ջ����
void InitStack(SqStack *&s)
{
	s=(SqStack *)malloc(sizeof(SqStack));
	s->top=-1;
} 
void DestroyStack(SqStack *&s)
{
	free(s);
}
bool StackEmpty(SqStack *s)
{
	return(s->top==-1);
}
bool Push(SqStack *&s,ElemType e)
{
	if (s->top==MaxSize-1)    //ջ�����������ջ�����
		return false;
	s->top++;
	s->data[s->top]=e;
	return true;
}
bool Pop(SqStack *&s,ElemType &e)
{
	if (s->top==-1)		//ջΪ�յ��������ջ�����
		return false;
	e=s->data[s->top];
	s->top--;
	return true;
} 
bool GetTop(SqStack *s,ElemType &e)
{
	if (s->top==-1) 		//ջΪ�յ��������ջ�����
		return false;
	e=s->data[s->top];
	return true;
}
//-------------------------------------

void TopSort(AdjGraph *G)			//���������㷨
{
	SqStack* st;					//����һ��ջ(Ԫ��Ϊint����)
	InitStack(st);					//��ʼ��
	int indegree[MAXV];				//����һ���������
	for(int i=0;i<G->n;i++) indegree[i]=0; 
	for (int i=0;i<G->n;i++)			//�����ж�������
	{	ArcNode *p=G->adjlist[i].firstarc;
		while (p!=NULL)
		{
			int w=p->adjvex;			//�ҵ�����i���ڽӵ�w 
			indegree[w]++;				//����w�������1
			p=p->nextarc;
		}
	}
	for (int i=0;i<G->n;i++)			//�����Ϊ0�Ķ����ջ
		if (indegree[i]==0)
			Push(st,i);
	int i;
	while (!StackEmpty(st))				//ջ����ѭ��
	{	Pop(st,i);					//��ջһ������i
		printf("%d ",i);			//����ö���
		ArcNode* p=G->adjlist[i].firstarc;	//�ҵ�һ���ڽӵ�
		while (p!=NULL)				//������i�ĳ����ڽӵ����ȼ�1
		{	int w=p->adjvex;			//���ڱ�<i,w> 
			indegree[w]--;			//����w����ȼ�1
			if (indegree[w]==0)		//�����Ϊ0���ڽӵ�w��ջ
				Push(st,w);
			p=p->nextarc;			//����һ���ڽӵ�
		}
	}
}

int main()
{
	AdjGraph *G;
	int A[MAXV][MAXV]=
	{{0,1,INF,INF,INF,INF},
	{INF,0,1,INF,INF,INF},
	{INF,INF,0,1,INF,INF},
	{INF,INF,INF,0,INF,INF},
	{INF,1,INF,INF,0,1},
	{INF,INF,INF,1,INF,0}};
	int n=6, e=6;
	CreateAdj(G,A,n,e);			//�������̡̳���ͼ8.44���ڽӱ�
	printf("ͼG���ڽӱ�:\n");
	DispAdj(G);					//����ڽӱ�G
	printf("��������:");TopSort(G);printf("\n");
	DestroyAdj(G);				//�����ڽӱ�
	return 1;
}
