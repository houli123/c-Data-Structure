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
void eazySort(rectype r[],int n){
	int k,min;
	for(int i=0;i<n-1;i++){
		min=i;
		for(k=i+1;k<n;k++)
			if(r[k].key<r[min].key)
				min=k;
		if(min!=i)  //��ʾ����ԭ�ؽ���
			swap(r[min].key,r[i].key);
	}
}

//���������
//ɸѡ������ѡ�������ϸ���СԪ����׹
void sift(rectype r[],int i,int len){ 
	//left������,i�Ǹ���len�Ƕ��ٸ�����
	r[0]=r[i];   //��0�ڳ����ݴ�����
	for(int left=2*i;left<=len;left*=2){
		if(left<len && r[left].key<r[left+1].key)  //ѡ�����Һ�������һ��
			left++;  //�Һ��Ӹ��󣬽�leftָ���Һ���
		if(r[0].key<r[left].key){  //���ӱȸ���
			r[i]=r[left];  //������Ų������
			i=left;
		}
		else  //�������Һ��Ӷ���
			break;
	}
	r[i]=r[0];
}
//��������ѵķ�ʽ�������һ����֧�ڵ㿪ʼ������ϸ���С��ɸ��ȥ
void createHeap(rectype r[],int n){
	for(int i=n/2;i>=1;i--)
		sift(r,i,n);
}
//������Ľ�����ÿ�θ������ģ������һ��Ԫ�ؽ���������ÿ��ѡ�����ķ�ĩβ�����γ�������
void heapSort(rectype r[],int n){
	createHeap(r,n);
	for(int i=n;i>=2;i--){  //����n-1�ɶ�����ÿһ�˶���Ԫ�ظ�����1
		swap(r[1].key,r[i].key);  //�����һ��Ԫ�غ͸�����
		sift(r,1,i-1);
	}
}


//С��������
//ɸѡ������ѡ�������ϸ���СԪ����׹
void sift2(rectype r[],int i,int len){ 
	r[0]=r[i];   
	for(int left=2*i;left<=len;left*=2){
		if(left<len && r[left].key>r[left+1].key)  //����Һ��Ӹ�С
			left++;    //Ҳ��ֻ��Ķ�����if�Ĵ���С�ںż��� 
		if(r[0].key>r[left].key){  
			r[i]=r[left];  
			i=left;
		}
		else 
			break;
	}
	r[i]=r[0];
}
void createHeap2(rectype r[],int n){
	for(int i=n/2;i>=1;i--)
		sift2(r,i,n);
}

void heapSort2(rectype r[],int n){
	createHeap2(r,n);
	for(int i=n;i>=2;i--){ 
		swap(r[1].key,r[i].key);  
		sift2(r,1,i-1);
	}
}

//�±��0��ʼ�Ķ�����
void sift3(rectype r[],int i,int len){
	 int temp=r[i].key;
	 int left;
	 for(left=i*2+1;left<len;left=i*2+1){
	     if(left!=len-1 && r[left+1].key>r[left].key)
	        left++;
	    if(temp>r[left].key)
	        break;
	    else
	        {r[i].key=r[left].key;i=left;}
	 }
	 r[i].key=temp;
}
void heapsort(rectype r[],int n){
     for(int i=n/2-1;i>=0;i--)
        sift3(r,i,n);
    for(int i=n-1;i>=1;i--){
        int temp=r[0].key;
        r[0].key=r[i].key;
        r[i].key=temp;
        sift3(r,0,i);
    }
 }



int main(){
	int n=8;
	rectype R4[MAXL];rectype R3[MAXL];
	keytype c[]={15,6,0,7,9,3,10,30};
	printf("ð������-------------------------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	eazySort(R4,n);
	displist(R4,n);
	printf("������-------------------------------------\n");
	createlist2(R3,c,n);
	createHeap2(R3,n);  //ʵ��С����
	displist2(R3,n);
	heapSort2(R3,n);  //С���ѵ����򣨽���
	displist2(R3,n);	
	
	heapSort(R3,n);  //����ѵ���������
	displist2(R3,n);	
    return 0;
}
