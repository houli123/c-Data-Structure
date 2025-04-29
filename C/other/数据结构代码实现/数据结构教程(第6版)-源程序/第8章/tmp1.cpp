#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define INF 32767				//�����
#define	MAXV 100				//��󶥵����
#define MaxSize 100
typedef struct ANode
{	int adjvex;					//�ñߵ��ڽӵ���
	struct ANode *nextarc;		//ָ����һ���ߵ�ָ��
} ArcNode;						//�߽������
typedef struct Vnode
{
	ArcNode *firstarc;			//ָ���һ����
} VNode;						//�ڽӱ�ͷ�������
typedef struct 
{	VNode adjlist[MAXV];		//�ڽӱ�ͷ�������
	int n,e;					//ͼ�ж�����n�ͱ���e
} AdjGraph;						//������ͼ�ڽӱ�����
void CreateAdj(AdjGraph *&G,int A[MAXV][MAXV],int n,int e) //����ͼ���ڽӱ�
{
	int i,j;
	ArcNode *p;
	G=(AdjGraph *)malloc(sizeof(AdjGraph));
	for (i=0;i<n;i++)								//���ڽӱ�������ͷ����ָ�����ó�ֵ
		G->adjlist[i].firstarc=NULL;
	for (i=0;i<n;i++)								//����ڽӾ�����ÿ��Ԫ��
		for (j=n-1;j>=0;j--)
			if (A[i][j]!=0 && A[i][j]!=INF)			//����һ����
			{	p=(ArcNode *)malloc(sizeof(ArcNode));	//����һ�����p
				p->adjvex=j;
				p->nextarc=G->adjlist[i].firstarc;	//����ͷ�巨������p
				G->adjlist[i].firstarc=p;
			}
	G->n=n; G->e=n;
}
void DispAdj(AdjGraph *G)	//����ڽӱ�G
{
	int i;
	ArcNode *p;
	for (i=0;i<G->n;i++)
	{
		p=G->adjlist[i].firstarc;
		printf("%3d: ",i);
		while (p!=NULL)
		{
			printf("%3d��",p->adjvex);
			p=p->nextarc;
		}
		printf("��\n");
	}
}
void DestroyAdj(AdjGraph *&G)		//����ͼ���ڽӱ�
{	int i;
	ArcNode *pre,*p;
	for (i=0;i<G->n;i++)			//ɨ�����еĵ�����
	{	pre=G->adjlist[i].firstarc;	//pָ���i����������׽��
		if (pre!=NULL)
		{	p=pre->nextarc;
			while (p!=NULL)			//�ͷŵ�i������������б߽��
			{	free(pre);
				pre=p; p=p->nextarc;
			}
			free(pre);
		}
	}
	free(G);						//�ͷ�ͷ�������
}
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
int Count(SqQueue *q)
{
	return (q->rear-q->front+MaxSize)%MaxSize;
}

int BFS(AdjGraph* G,int u,int& v)		//�ֲ�εĹ�����ȱ��� 
{
	int visited[MAXV];
	memset(visited,0,sizeof(visited));
	SqQueue *qu;				//����һ������
	InitQueue(qu); 
	int ans,level=0;
	ArcNode *p;
	visited[u]=1;					//������ʼ����u 
	enQueue(qu,u);					//��ʼ����u����
	while(!QueueEmpty(qu))			//�Ӳ���ʱѭ��
	{
		int cnt=Count(qu);					//�����Ԫ�ظ���cnt 
		for(int i=0;i<cnt;i++)				//ѭ��cnt����ǰ��ε����ж��� 
		{	deQueue(qu,u);					//���Ӷ���u
			v=u, ans=level;					//���������ӵĶ���Ͳ�� 
			p=G->adjlist[u].firstarc;		//pָ�򶥵�u�ĵ�һ���ڽӵ�
			while (p!=NULL)
			{	int w=p->adjvex;				//wΪ����u���ڽӵ�
				if (visited[w]==0)			//��wδ����,��ݹ����֮
				{
					visited[w]=1;			//���ʶ���w 
					enQueue(qu,w);			//����w���� 
				}
				p=p->nextarc;				//��u����һ���ڽӵ�
			}
		}
		level++;
	}
	return ans;
}
int solve(AdjGraph* G)
{
	int u=0,v;
	BFS(G,u,v);						//�Ӷ���0����BFS����Զ�Ķ���v 
	return BFS(G,v,u);				//�ٴӶ���v���������� 
}
int main()
{ 
	int n=6, e=7;
	int A[MAXV][MAXV]={
		{0,1,1,0,0,0},{1,0,0,1,0,0},{1,0,0,0,1,0},
		{0,1,0,0,0,0},{0,0,1,0,0,1},{0,0,0,0,1,0}};	

	AdjGraph *G;
	CreateAdj(G,A,n,e);			////����ͼ8.19���ڽӱ�
	printf("ͼG:\n");DispAdj(G);//����ڽӱ�

	int v;
	int ans=solve(G);
	printf("ans=%d\n",ans);
	DestroyAdj(G);				//�����ڽӱ�
	return 1;
}
