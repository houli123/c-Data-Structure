//������ȱ����㷨
#include "graph.cpp"
#include<string.h>
#define MaxSize 100
//---------------------------------------------------------
//--������ȱ�����ʹ�ö��еĻ��������㷨-------------------
//---------------------------------------------------------
typedef int ElemType;
typedef struct 
{	
	ElemType data[MaxSize];
	int front,rear;		//���׺Ͷ�βָ��
} SqQueue;
void InitQueue(SqQueue *&q)
{	q=(SqQueue *)malloc (sizeof(SqQueue));
	q->front=q->rear=0;
}
void DestroyQueue(SqQueue *&q)
{
	free(q);
}
bool QueueEmpty(SqQueue *q)
{
	return(q->front==q->rear);
}
bool enQueue(SqQueue *&q,ElemType e)
{	if ((q->rear+1)%MaxSize==q->front)	//���������
		return false;
	q->rear=(q->rear+1)%MaxSize;
	q->data[q->rear]=e;
	return true;
}
bool deQueue(SqQueue *&q,ElemType &e)
{	if (q->front==q->rear)				//�ӿ������
		return false;
	q->front=(q->front+1)%MaxSize;
	e=q->data[q->front];
	return true;
}
//---------------------------------------------------------
void BFS(AdjGraph *G,int v)  				//����BFS 
{
	int w,i;
	ArcNode *p;
	SqQueue *qu;							//���廷�ζ���ָ��
	InitQueue(qu);							//��ʼ������
	int visited[MAXV];            			//���嶥����ʱ�־����
	memset(visited,0,sizeof(visited));		//���ʱ�־�����ʼ��
	printf("%2d",v); 						//��������ʶ���ı��
	visited[v]=1;              				//���ѷ��ʱ��
	enQueue(qu,v);
	while (!QueueEmpty(qu))       			//�Ӳ���ѭ��
	{	
		deQueue(qu,v);						//����һ������v
		p=G->adjlist[v].firstarc; 			//ָ��v�ĵ�һ���ڽӵ�
		while (p!=NULL)						//�Ҷ���v�������ڽӵ�w
		{
			int w=p->adjvex;	
			if (visited[w]==0) 				//������wδ���ʹ� 
			{
				printf("%2d",w);  			//���ʶ���w
				visited[w]=1;				//���ѷ��ʱ��
				enQueue(qu,w);				//����w����
           	}
           	p=p->nextarc;              		//����һ���ڽӵ�
		}
	}
	printf("\n");
	DestroyQueue(qu);						//���ٶ��� 
}
int main()
{
	AdjGraph *G;
	int A[MAXV][MAXV]={{0,1,0,1,1},{1,0,1,1,0},
			{0,1,0,1,1},{1,1,1,0,1},{1,0,1,1,0}};
	int n=5, e=8;
	CreateAdj(G,A,n,e);			//�������̡̳���ͼ8.1(a)���ڽӱ�
	printf("ͼG���ڽӱ�:\n");
	DispAdj(G);					//����ڽӱ�G
	printf("�����������:");BFS(G,2);printf("\n");
	DestroyAdj(G);				//�����ڽӱ�
	return 1;
}

