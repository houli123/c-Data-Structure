#include "graph.cpp"	//����ͼ�Ļ������㺯��
void main()
{
	AdjGraph *G;
	int A[][MAXV]={{0,6,INF,INF,INF},{INF,0,1,INF,INF},{INF,INF,0,3,2},{INF,INF,INF,0,INF},{5,INF,INF,2,0}};
	int n=5,e=6;
	CreateAdj(G,A,n,e);		//����ͼ���ڽӱ�
	printf("G���ڽӱ�:\n");
	DispAdj(G);
	printf("����ͼG���ڽӱ�\n");
	DestroyAdj(G);
}
