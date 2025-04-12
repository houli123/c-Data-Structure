/*------------------------------------------------------------------------------
	* file:amlgraph.h
	* date:10-12-2014
	* author:doodlesomething@163.com
	* version:1.0
	* description:�ڽӶ��ر�ʵ������ͼ/���Ļ�������
--------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2

#define MAX_VERTEX_NUM 20

//������������
typedef int VertexType;

typedef int Status;

typedef enum {unvisited,isvisited}VisitIf;

//ͼ������:����ͼ/��
typedef enum {UDG,UDN}GraphKind;

typedef struct EBox {
	VisitIf mark;	//���ʱ��
	int ivex;	//�߶���һ
	int jvex;	//�߶����
	struct EBox *ilink;	//ָ�������ڶ���һ����һ����,�����������ͬ��һ����
	struct EBox *jlink;	//ָ�������ڶ��������һ����,�������յ���ͬ��һ����
	int weight;	//�ߵ�Ȩֵ
}EBox;


typedef struct VexBox {
	VertexType data;
	EBox *firstarc;	//ָ���һ�������ڸö���ı�
} VexBox;


typedef struct {
	VexBox adjmulist[MAX_VERTEX_NUM];
	int vexnum;				//ͼ�Ķ�����
	int arcnum;				//ͼ�ı���
	GraphKind kind;			//ͼ������
} AMLGraph;



int visited[MAX_VERTEX_NUM];		//���ʱ�־����

Status CreateGraph(AMLGraph *G);  //����ͼ

//��λһ������ֵΪͼ�е�λ�ã����򷵻�-1
int LocateVex(AMLGraph G,VertexType v);


//���ض����ֵ
VertexType GetVex(AMLGraph G,int v);

//��ֵ
Status PutVex(AMLGraph *G,VertexType v,VertexType value ); 

//����һ������
void InsertVex(AMLGraph *G,VertexType v);

//����һ�λ�
Status InsertArc(AMLGraph *G,VertexType v,VertexType w);

//���ض���ֵΪv����һ���ڽӶ������ţ���������-1
int FirstAdjVex(AMLGraph G,VertexType v);

//���ض���ֵΪv����ڶ���ֵΪw����һ����������
int NextAdjVex(AMLGraph G,VertexType v,VertexType w);


//������ȱ���
void DFSTraverse(AMLGraph G);


//�ݹ�ʵ����ȱ����ڽӵ�
void DFS(AMLGraph G,int i);

/*------------------------------------------------------------------------------
	* file:AMLGrpah.c
	* date:10-12-2014
	* author:doodlesomething@163.com
	* version:1.0
	* description:�ڽӶ��ر�ʵ������ͼ/���Ļ�������
	* more:��ʵ�ָо���ʮ�ֱ�������֮��
--------------------------------------------------------------------------------*/
/*
* @description:����ͼ(����ͼ/��)
*/
Status CreateGraph(AMLGraph *G)
 {
	int i,j,k,w;
	VertexType va,vb;
	EBox *p;
	
	//ȷ��ͼ������
	printf("please enter the kind of graph:");
	scanf("%d",&(*G).kind);

	//ȷ��ͼ�Ķ���ͱ���
	printf("please enter vexnum and arcnum:");
	scanf("%d,%d",&(*G).vexnum,&(*G).arcnum);


	//ȷ��ͼ�ĸ�������
	printf("please enter each value of graph:");
	for(i = 0; i < (*G).vexnum ; i++)  {
		scanf("%d,",&(*G).adjmulist[i].data);
		(*G).adjmulist[i].firstarc = NULL;
	}
	
	//ȷ������������ϵ����������
	if((*G).kind == UDG)
		printf("please enter heads and tails:\n");
	else 
		printf("please enter heads,weights and tails\n");

	for(k = 0; k < (*G).arcnum ;k++) {
		if((*G).kind == UDG)
			scanf("%d,%d",&va,&vb);
		else 
			scanf("%d,%d",&va,&vb,&w);
		//�Ż��������ڶ�������������λ��
		i = LocateVex(*G,va);
		j = LocateVex(*G,vb);
		

		if(i < 0 || j < 0)
			return ERROR;


		p = (EBox *) malloc(sizeof(struct EBox));
		if(!p)
			exit(OVERFLOW);

		///�����½ڵ�
		p->ivex = i;
		p->jvex = j;
		p->mark = unvisited;
		//ע��ÿ�β����½ڵ㶼��������ı�ͷ����
		p->ilink = (*G).adjmulist[i].firstarc;
		p->jlink = (*G).adjmulist[j].firstarc;
		(*G).adjmulist[i].firstarc = p;
		(*G).adjmulist[j].firstarc = p;
		if((*G).kind == UDN)
			p->weight = w;
	}
	return OK;
}


/*
* @description:��λһ������ֵ��ͼ�е�λ��,���򷵻�-1
*/

int LocateVex(AMLGraph G,VertexType v) {
	int i;

	for(i = 0; i < G.vexnum ; i++)
		if(G.adjmulist[i].data == v)
			return i;

	return -1;
}


/*
* @description:���ض���v��ֵ
*/
VertexType GetVex(AMLGraph G,int v) {
	if(v > G.vexnum || v < 0)
		exit(ERROR);
	
	return G.adjmulist[v].data;
}


/*
* @description:�Զ���ֵΪv�Ķ��㸳ֵΪvalue
*/
Status PutVex(AMLGraph *G,VertexType v,VertexType value) {
	int i;

	i = LocateVex(*G,v);

	if(i < 0)
		return ERROR;

	(*G).adjmulist[i].data = value;

	return OK;
}


/*
* @description:���ض���ֵΪv����һ���ڽӵ����ţ����򷵻�-1
*/
int FirstAdjVex(AMLGraph G,VertexType v) {
	int i;
	EBox *p;

	i = LocateVex(G,v);

	if(i < 0)
		return -1;
	
	p = G.adjmulist[i].firstarc;

	if(p)
		if(p->ivex == i)
			return p->jvex;
		//Ҫע��������������
		else
			return p->ivex;

	else 
		return -1;

}


/*
* @description:���ض���ֵΪv����ڶ���ֵΪw����һ���ڽӶ�������
*/
int NextAdjVex(AMLGraph G,VertexType v,VertexType w) {
	int i,j;
	EBox *p;

	i = LocateVex(G,v);
	j = LocateVex(G,w);

	p = G.adjmulist[i].firstarc;	//�����������ҵ����
	
	while(p)
		if(p->ivex == i && p->jvex != j ) //���1
			p = p->ilink; 
		else if(p->jvex == i && p->ivex != j) //���2
			p = p->jlink;
		else
			break;
	
	//���1
	if(p && p->ivex == i && p->jvex == j) {
		p = p->ilink;

		if(p && p->ivex == i)
			return p->jvex;
		else if(p && p->jvex == i)
			return p->ivex;
	}

	//���2
	if(p && p->ivex == j && p->jvex == i) {
		p = p->jlink;

		if(p && p->ivex == i)
			return p->jvex;
		else if(p && p->jvex == i)
			return p->ivex;
	}


	return -1;
}


/*
* @description:����һ������
*/
void InsertVex(AMLGraph *G,VertexType v) {
	int i;

	i = (*G).vexnum;

	(*G).adjmulist[i].data = v;
	(*G).adjmulist[i].firstarc = NULL;
	(*G).vexnum++;
}


/*
* @description:����һ�λ�
*/
Status InsertArc(AMLGraph *G,VertexType v,VertexType w)
{
        int i,j;
        EBox *p;
        //�Ż��������ڶ�������������λ��
	i = LocateVex(*G,v);
	j = LocateVex(*G,w);


	if(i < 0 || j < 0)
		return ERROR;

	p = (EBox *) malloc(sizeof(struct EBox));

	if(!p)
		exit(OVERFLOW);

	///�����½ڵ�
	p->ivex = i;
	p->jvex = j;
	p->mark = unvisited;
	//ע��ÿ�β����½ڵ㶼��������ı�ͷ����
	p->ilink = (*G).adjmulist[i].firstarc;
	p->jlink = (*G).adjmulist[j].firstarc;
	(*G).adjmulist[i].firstarc = p;
	(*G).adjmulist[j].firstarc = p;

	if((*G).kind == UDN) {
		printf("please enter the weight of the arc:");
		scanf("%d",&p->weight);
	}


	return OK;

}



/*
 * @description:������ȱ���ͼ
 */
void DFSTraverse(AMLGraph G)
{
	int i;

	for(i = 0;i < G.vexnum ; i++) 
		visited[i] = FALSE;
	//ѭ����Ϊ��֤ÿ�����㶼�ܱ����ʵ�
	for(i = 0; i < G.vexnum; i++) 
		if(!visited[i])
			DFS(G,i);

}


/*
 * @description:�ݹ�ʵ��������ȱ���
 */
void DFS(AMLGraph G,int i)
{
	int j;
	EBox *p;

	printf("%d",G.adjmulist[i].data);
	visited[i] = TRUE;

	p = G.adjmulist[i].firstarc;

	while(p) {
		j = p->ivex == i ? p->jvex : p->ivex;
		if(!visited[j])
			DFS(G,j);

		p = p->ivex == i ? p->ilink : p->jlink ;
	}
}

void DispGraph(AMLGraph *G)
{
	EBox *p;
	for (int i=0;i<G->vexnum;i++)
	{
		printf("����%d[%d]): ",i,G->adjmulist[i].firstarc);
		p=G->adjmulist[i].firstarc;
		while (p!=NULL)
		{
			printf("%d[%d,%d,%d,%d]  ",p,p->ivex,p->ilink,p->jvex,p->jlink);
			p=p->ilink;
		}
		printf("\n");
	}
}

void main() 
{
	AMLGraph G;

	CreateGraph(&G);
	DispGraph(&G);

	//DFSTraverse(G);
	printf("\n");

	/*	
	�������������
	please enter the kind of graph:0
	please enter vexnum and arcnum:8,8
	please enter each value of graph:1,2,3,4,5,6,7,8
	please enter heads and tails:
	1,2
	1,3
	2,4
	2,5
	3,6
	3,7
	4,8
	5,8
	13762584

	*/
}