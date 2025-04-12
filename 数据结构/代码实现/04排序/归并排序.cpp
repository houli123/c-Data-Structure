#include <stdio.h> 
#define MAXL 100
#include <malloc.h>

typedef int keytype;
typedef char infotype;
typedef struct{
	keytype key;
	infotype data;
}rectype;
void createlist(rectype R[],keytype keys[],int n)	//����˳���
{
	for (int i=0;i<n;i++)
		R[i].key=keys[i];
}
void displist(rectype R[],int n)	//���˳���
{
	for (int i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}
void createlist2(rectype R[],keytype keys[],int n)	//����˳���
{
	for (int i=1;i<=n;i++)
		R[i].key=keys[i-1];
}
void displist2(rectype R[],int n)	//���˳���
{
	for (int i=1;i<=n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}
//����������
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

//��·�鲢���򣨵ݹ�ʽ��
void merge(rectype r[],int low,int mid,int high){
	rectype* r1;  //����������������
	int i=low,j=mid+1,k;  //i�ǵ�һ�Σ�j�ǵڶ��Σ�k��ʾr��λ��
	r1=(rectype*)malloc((high-low+1)*sizeof(rectype)); //�����rһ���Ŀռ�
	for(k=low;k<=high;k++)  //�Ƚ���һ�κ͵ڶ��ζ���ȥr1
		r1[k].key=r[k].key;  
	for(k=i;i<=mid&&j<=high;k++){
		if(r1[i].key<=r1[j].key)
			r[k].key=r1[i++].key;
		else
			r[k].key=r1[j++].key;
	}
	//������һ��������һ��û��ʱ
	while(i<=mid)
		r[k++].key=r1[i++].key;
	while(j<=high)
		r[k++].key=r1[j++].key;
	free(r1);
}
void mergeSort(rectype r[],int low,int high){
	if(low<high){  //low=high��ʾ��ʣһ��Ԫ���ˣ�
		int mid=(low+high)/2;  //�м仮�֣��ֱ�����ߵݹ�Ĺ鲢����
		mergeSort(r,low,mid);
		mergeSort(r,mid+1,high);
		merge(r,low,mid,high);  //�ٶ����������鲢
	}
}



//�ǵݹ�ʽ
void MergePass(rectype R[],int length,int n)	//�������������һ�˹鲢
{
	int i;
	for (i=0;i+2*length-1<n;i=i+2*length) 	//�鲢length�����������ӱ�
		merge(R,i,i+length-1,i+2*length-1);
	if (i+length-1<n-1)                		//���������ӱ�,���߳���С��length
		merge(R,i,i+length-1,n-1);  		//�鲢�������ӱ�
}
void MergeSort(rectype R[],int n)			//�Ե����ϵĶ�·�鲢�㷨
{
	int length;
	for (length=1;length<n;length=2*length)//����log2n�˹鲢
		MergePass(R,length,n);
}


int main(){
	int n=8;
	rectype R4[MAXL],R[MAXL];
	keytype c[]={15,6,0,7,9,3,10,30};
	printf("�鲢���򣨵ݹ飩-------------------------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	mergeSort(R4,0,n-1);
	displist(R4,n);	
	
	printf("�鲢���򣨷ǵݹ飩-------------------------------------\n");
	createlist(R,c,n);
	displist(R,n);
	MergeSort(R,n-1);
	displist(R,n);	
    return 0;
}
