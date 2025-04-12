//����8.4�����㷨:�ж�ͼG�дӶ���u��v�Ƿ���ڼ�·��
#include "graph.cpp"
#include<string.h>
int visited[MAXV];					//ȫ������
bool ExistPath(AdjGraph *G,int u,int v)
{
	int w; ArcNode *p;
	visited[u]=1;					//���ѷ��ʱ��
	if (u==v)						//�ҵ���һ��·��
		return true;
	p=G->adjlist[u].firstarc;		//pָ�򶥵�u�ĵ�һ���ڽӵ�
	while (p!=NULL)
	{	w=p->adjvex;				//wΪ����u���ڽӵ�
		if (visited[w]==0)			//��w����δ����
		{
			if (ExistPath(G,w,v))	//���Ӷ���w�����ҵ�����v��·�� 
				return true;		//����true 
		}
		p=p->nextarc;				//pָ�򶥵�u����һ���ڽӵ�
	}
	return false;					//������u��v��·��������false 
}

int main()
{
	AdjGraph *G;
	int A[MAXV][MAXV]={{0,8,INF,5,INF},{INF,0,3,INF,INF},
			{INF,INF,0,INF,6},{INF,INF,9,0,INF},{INF,INF,INF,INF,0}};
	int n=5, e=5;
	CreateAdj(G,A,n,e);			//�������̡̳���ͼ8.4���ڽӱ�
	printf("ͼG���ڽӱ�:\n");
	DispAdj(G);					//����ڽӱ�G
	int u=0, v=4;
	memset(visited,0,sizeof(visited));
	bool has=ExistPath(G,u,v);
	printf("ͼG�ж���%d������%d%s·��\n\n",u,v,(has?"��":"û��"));
	u=4; v=0;
	memset(visited,0,sizeof(visited));
	has=ExistPath(G,u,v);
	printf("ͼG�ж���%d������%d%s·��\n\n",u,v,(has?"��":"û��"));
	DestroyAdj(G);				//�����ڽӱ�
	return 1;
}
