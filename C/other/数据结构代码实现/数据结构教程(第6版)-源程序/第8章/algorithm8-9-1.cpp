//��8.9�����㷨:�󲻴�Ȩ������ͨͼG�дӶ���u������v�����·�����ȡ�
#include "graph.cpp"
#define MaxSize 100
int visited[MAXV];

//�ⷨ2 
typedef struct
{	int v;							//������
} QUEUE2;							//�ǻ��ζ�������
//---------------------------------------------------------
//--������ȱ�����ʹ�ö��еĻ��������㷨-------------------
//---------------------------------------------------------
typedef struct 
{	
	QUEUE2 data[MaxSize];
	int front,rear;		//���׺Ͷ�βָ��
} SqQueue;
void InitQueue(SqQueue *&q)			//��ʼ�� 
{	q=(SqQueue *)malloc (sizeof(SqQueue));
	q->front=q->rear=0;
}
void DestroyQueue(SqQueue *&q)		//���ٶ��� 
{
	free(q);
}
bool QueueEmpty(SqQueue *q)			//�ж϶ӿ� 
{
	return(q->front==q->rear);
}
bool enQueue(SqQueue *&q,QUEUE2 e)		//Ԫ��e���� 
{	if ((q->rear+1)%MaxSize==q->front)	//���������
		return false;
	q->rear=(q->rear+1)%MaxSize;
	q->data[q->rear]=e;
	return true;
}
bool deQueue(SqQueue *&q,QUEUE2 &e)		//����Ԫ��e 
{	if (q->front==q->rear)				//�ӿ������
		return false;
	q->front=(q->front+1)%MaxSize;
	e=q->data[q->front];
	return true;
}
int Count(SqQueue *&q)					//������е�Ԫ�ظ��� 
{
	return (q->rear-q->front+MaxSize)%MaxSize;
}

//---------------------------------------------------------

int shortpathlen(AdjGraph *G,int u,int v)		//�󶥵�u��v�������·������
{ 
	ArcNode *p;
	SqQueue *qu;							//���廷�ζ���(Ԫ��������QUEUE2)
	InitQueue(qu);							//��ʼ��qu 
	int visited[MAXV];
	for (int i=0;i<G->n;i++) visited[i]=0;	//���ʱ���ó�ֵ0
	QUEUE2 e,e1;
	e.v=u;									//��������u�Ķ���Ԫ��e 
	enQueue(qu,e);							//Ԫ��e����
	visited[u]=1;							//�޸Ķ���u�ķ��ʱ�� 
	int ans=0;								//������·������(��ʼʱΪ0) 
	while (!QueueEmpty(qu))					//�Ӳ���ѭ��
	{
		int cnt=Count(qu);					//�����Ԫ�ظ���cnt
		for(int i=0;i<cnt;i++)				//ѭ��cnt�� 
		{ 	deQueue(qu,e);					//����Ԫ��e
			u=e.v;
			if (u==v)						//�ҵ�vʱ����ans
				return ans;
			p=G->adjlist[u].firstarc;			//��u�ĵ�һ���ڽӵ�
			while (p!=NULL)
			{	int w=p->adjvex;					//�ڽӵ�Ϊw 
				if (visited[w]==0)				//������wû�з��ʹ� 
				{	e1.v=w;						//��������w�Ķ���Ԫ��e1 
					enQueue(qu,e1);				//Ԫ��e1����	
					visited[w]=1;				//�޸Ķ���w�ķ��ʱ��
				}
				p=p->nextarc;					//��u����һ���ڽӵ�
			}
		}
		ans++; 
	}
	DestroyQueue(qu);						//���ٶ���
}

int main()
{ 
	int n=5, e=7;
	int A[MAXV][MAXV]={
		{0,1,1,0,0},{0,0,1,0,0},{0,0,0,1,1},
		{0,0,0,0,1},{1,0,0,0,0}};	

	AdjGraph *G;
	CreateAdj(G,A,n,e);			////����ͼ8.19���ڽӱ�
	printf("ͼG:\n");DispAdj(G);//����ڽӱ�
	int u=1,v=0;
	printf("%d->%d�����·������=%d\n",u,v,shortpathlen(G,u,v));
	DestroyAdj(G);				//�����ڽӱ�
	return 1;
}
