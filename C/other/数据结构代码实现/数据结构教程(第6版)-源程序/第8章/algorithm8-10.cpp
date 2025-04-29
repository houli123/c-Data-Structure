//����8.10�����㷨
#include<stdio.h>
#include<malloc.h>
#define MaxSize 100
#define M 20
#define N 20 
int dx[]={-1,0,1,0};                                                	//ˮƽ����ƫ����
int dy[]={0,1,0,-1};                                                	//��ֱ����ƫ����
typedef struct                                                             	
{   int x,y;                                                          	//��¼(x,y)λ��
} QNode; 					//����Ԫ������
//---------------------------------------------------------
//--������ȱ�����ʹ�ö��еĻ��������㷨-------------------
//---------------------------------------------------------
typedef struct 
{	
	QNode data[MaxSize];
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
bool enQueue(SqQueue *&q,QNode e)		//Ԫ��e���� 
{	if ((q->rear+1)%MaxSize==q->front)	//���������
		return false;
	q->rear=(q->rear+1)%MaxSize;
	q->data[q->rear]=e;
	return true;
}
bool deQueue(SqQueue *&q,QNode &e)		//����Ԫ��e 
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
int s=0;
SqQueue *qu;							//���廷�ζ���(Ԫ��������Qnode)
int visited[M][N];                     	//���ʱ������
void dfs(int A[M][N],int m,int n,int x,int y)   	//DFS�㷨
{	visited[x][y]=1;
 	QNode e;
    	e.x=x; e.y=y;
    	printf("[%d,%d]����\n",x,y); 
    	enQueue(qu,e);
    	for (int di=0;di<4;di++)
        {	int nx=x+dx[di];
           	int ny=y+dy[di];
           	if (nx>=0 && nx<m && ny>=0 && ny<n && !visited[nx][ny] && A[nx][ny]==1)
               	dfs(A,m,n,nx,ny);
        }
}
int bfs(int A[M][N],int m,int n)                         //BFS�㷨
{	int ans=0;
	QNode e,e1;
    while (!QueueEmpty(qu))
	{	int cnt=Count(qu);          					//�������Ԫ�ظ���cnt
        for (int i=0;i<cnt;i++)             			//����һ���Ԫ��
        {	deQueue(qu,e);       						//����Ԫ��e
            int x=e.x;
            int y=e.y;
            printf("[%d,%d]����\n",x,y); 
            for (int di=0;di<4;di++)
            {	int nx=x+dx[di];
               	int ny=y+dy[di];
               	if (nx>=0 && nx<m && ny>=0 && ny<n && visited[nx][ny]==0)
                {	if (A[nx][ny]==1)
                	{
                		printf("�ҵ�Ŀ��[%d,%d]\n",nx,ny); 
                    	return ans;
                    }
                    e1.x=nx; e1.y=ny;
					enQueue(qu,e1);       				//(nx,ny)����
			    	printf("(%d)[%d,%d]����\n",++s,nx,ny); 
                    visited[nx][ny]=1;
                }
            }
        }
        ans++;
    }
    return ans;
}

int shortestdist(int A[M][N],int m,int n)			//����㷨 
{
	InitQueue(qu);									//��ʼ������qu 
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			visited[i][j]=0;
	bool find=false;
    int x,y;
    for (int i=0;i<m;i++)                           //�ҵ�����һ��½��(x,y)
    {	for (int j=0;j<n;j++)
        {	if(A[i][j]==1 &&  !find)
            {	find=true;
                x=i; y=j;
                break;
            }
        }
        if (find) break;							//�ҵ�����һ��½�غ��˳�ѭ�� 
    }
    dfs(A,m,n,x,y);
    int ans=bfs(A,m,n);
	DestroyQueue(qu);						//���ٶ���
	return ans;
}
int main()
{
	int A[M][N]={{1,1,0,0,0},{1,0,0,0,0},{0,0,1,0,0},{0,0,1,1,1},{0,0,0,1,0}};
	printf("ans=%d\n",shortestdist(A,5,5));
	return 1;
}
	
