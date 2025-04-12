#include<stdio.h>
#define MaxSize 100
#define N 10					//�����漰������,�˵ı�Ŵ�1��N
#define M 7						//���ݹ�ϵ����
#define Q 3						//ѯ�ʸ���
typedef struct
{
	int rank;					//�����
	int parent;					//����˫��
} UFSTree;
void Init(UFSTree S[],int n)	//��ʼ�����鼯��
{ 
	for (int i=1;i<=n;i++)
	{
		S[i].rank=0;			//�ȳ�ʼ��Ϊ0
		S[i].parent=i;			//˫�׳�ʼ��ָ������
	}
}

int Find(UFSTree S[],int x)					//�ݹ��㷨:����x�ļ��ϱ��
{	if (x!=S[x].parent)						//�Ǹ����
		S[x].parent=Find(S,S[x].parent);	//·��ѹ��
	return S[x].parent;
}

/*
int Find(UFSTree S[],int x)					//�ǵݹ��㷨:����x�ļ��ϱ��
{	int rx=x;
	while (S[rx].parent!=rx)				//��x�ĸ�rx
		rx=S[rx].parent;
	int y=x;
	while (y!=rx)							//·��ѹ��
	{	int tmp=S[y].parent;
		S[y].parent=rx;						//�����y��˫����Ϊrx 
		y=tmp;
	}
	return rx;								//���ظ�
}
*/
void Union(UFSTree S[],int x,int y)		//��x��y�����Ӽ����ϲ�
{ 
	int rx=Find(S,x);
	int ry=Find(S,y);
	if (rx==ry)							//x��y����ͬһ���Ӽ���
		return;
	if (S[rx].rank>S[ry].rank)			//rx����ȴ���ry�����
		S[ry].parent=rx;				//�����ry��Ϊ���rx�ĺ��ӽ��
	else								//rx�����С�ڵ���ry�����
	{ 
		S[rx].parent=ry;				//�����rx��Ϊ���ry�ĺ��ӽ��
		if (S[rx].rank==S[ry].rank)		//����ͬʱ 
			S[ry].rank++;				//ry��������1
	}
}
int friends(int R[][2],int m,int n)			//����㷨
{
	UFSTree S[MaxSize];						//���岢�鼯S 
	Init(S,n);								//��ʼ�� 
	for(int i=0;i<m;i++)					//�����������Ѷ�
	{	int a=R[i][0];						//���Ѷ�Ϊ(a,b)
		int b=R[i][1];
		Union(S,a,b);						//�ϲ� 
	}
	int ans=0;								//��ʾ����Ȧ����
	for(int i=1;i<=n;i++)
	{
		if (S[i].parent==i && S[i].rank>0)	//�ҵ�һ������Ȧ 
			ans++;
	}
	return ans;
}

int main()
{
	int n=10;
	int m=7;
	int R[M][2]={{2,4},{5,7},{1,3},{8,9},{1,2},{5,6},{2,3}};
	printf("����Ȧ����=%d\n",friends(R,m,n));
	return 0;
}

