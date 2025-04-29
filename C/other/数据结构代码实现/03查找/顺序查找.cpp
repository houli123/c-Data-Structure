#include <stdio.h> 
#define MAXL 100

typedef int keytype;
typedef char infotype;
typedef struct{
	keytype key;  //���ǲ��ҵĹؼ���
	infotype data;
}rectype;
//˳�����1
int seqSearch(rectype r[],int n,keytype k){
	int i=0;
	for(;i<n;i++)
		if(r[i].key==k)   //������Ϊ�õ��ǽṹ��������.key������ֵ
			break;
	if(i>=n)
		return 0;
	else
		return i+1;
}
//˳�����2�������һ���ڱ���
//�ô�������Ҫ���±�ͱ߽����⴦��ȱ�㣺��ĳ�����Ҫ��һ��
int seqSearch2(rectype r[],int n,keytype k){
	int i=n;
	r[0].key=k;
	for(;i>0;i--)
		if(r[i].key==k)   //������Ϊ�õ��ǽṹ��������.key������ֵ
			break;
	return i;
}

//���ֲ��ң�����
int binSearch(rectype r[],int n ,keytype k){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(k==r[mid].key)
			return mid+1;
		if (k<r[mid].key)
			high=mid-1;
		else
			low=mid+1;
	}
	printf("%d,%d",low,high);
	return 0;  //���whileû��ruturn��û�ҵ�������0
}
//���ö��ֲ����㷨��һ��������в���һ��Ԫ��x�������ֱ�������ԡ����㷨ʹ�����ڱ��ķ�ʽ���������±�0�Ľ��
typedef struct
{  int key;
}sqlist;
void createlist(sqlist R[],keytype keys[],int n)	//����˳���
{
	for (int i=1;i<=n;i++)
		R[i].key=keys[i-1];
}
void displist(sqlist R[],int n)	//���˳���
{
	for (int i=1;i<=n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}
void bininsert (sqlist  r[] , int x , int  n)
{
	int  low=1, high=n, mid, inplace, i, find=0;
	while (low<=high && !find)
	{  
		mid= (low+high)/2;
		if ( x<r[mid].key) high= mid-1;
		else  if ( x>r[mid].key) low= mid+1  ;
		else{
			i=  mid;
			find=1;
			}
	}
	if (find) inplace=mid;
	else inplace=low;
	for (i=n; i>=inplace; i--)
		r[i+1].key=r[i].key;
	r[inplace].key=  x;
}
//-----------------------------------------------------------------------------------------------


//Ϊ����ʾ��Ҫ�õ�˳�����
void CreateList(rectype R[],keytype keys[],int n)	//����˳���
{
	for (int i=0;i<n;i++)
		R[i].key=keys[i];
}
void DispList(rectype R[],int n)	//���˳���
{
	for (int i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}


//�ֿ���ҵ����Ͷ���
typedef struct{
	keytype key;
	int link;    //ָ���Ӧ�����ʼ�±�
}indexType;


int main(){
	int n=10;
	rectype R[MAXL],R2[MAXL],R3[MAXL];
	sqlist R4[MAXL];
	keytype a[]={2,3,1,8,5,4,9,0,7,6},k=6;
	keytype b[]={-1,2,3,1,8,5,4,9,0,7,6};//��һ�����ڷ��ڱ�
	keytype c[]={0,2,3,4,5,6,9,12,14,15};
	CreateList(R,a,n);
	CreateList(R2,b,n+1);  //����Ҫ�ഴһ�����
	CreateList(R3,c,n);
	createlist(R4,c,n);
	printf("���ұ�"); DispList(R,n);
	printf("R[%d]=%d\n",seqSearch(R,n,k),k);
	printf("���ұ�2��"); DispList(R2,n+1);
	printf("R[%d]=%d\n",seqSearch2(R2,n,k),k);
	printf("���ұ�3��"); DispList(R3,n);
	printf("R[%d]=%d\n",binSearch(R3,n,k),k);
	printf("-------------------------���ұ�4��\n"); 
	displist(R4,n);
	bininsert(R4,-1,n);
	displist(R4,n+1);
    return 0;
}
