//���鼯���㷨
#include <stdio.h>
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
int main()
{
	int i,x,y;
	UFSTree S[MaxSize];
	int rel[M][2]={{2,4},{5,7},{1,3},{8,9},{1,2},{5,6},{2,3}};
	int ans[Q][2]={{3,4},{7,10},{8,9}};
	Init(S,N);					//��ʼ�����鼯��t
	for (i=0;i<M;i++)				//���ݹ�ϵ���кϲ�����
		Union(S,rel[i][0],rel[i][1]);
	printf("  no  rank  parent\n");	//������鼯��t
	for (i=1;i<=N;i++)
		printf("%4d%5d%6d\n",i,S[i].rank,S[i].parent);
	printf("\n");
	printf("��ѯ�ʵĽ��:\n");		//��������
	for (i=0;i<Q;i++)
	{
		x=Find(S,ans[i][0]);
		y=Find(S,ans[i][1]);
		if (x==y)
			printf("  (%d,%d):Yes\n",ans[i][0],ans[i][1]);
		else
			printf("  (%d,%d):No\n",ans[i][0],ans[i][1]);
	}
	return 1;
}
