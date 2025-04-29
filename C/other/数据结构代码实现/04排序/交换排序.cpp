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




void swap(int &x,int &y){
	int temp=x;x=y;y=temp;
}
//ð�����򣨴Ӻ���ǰ.ÿ����С��ǰ�棩
void bubbleSort(rectype R[],int n){
	int i,j,flag=1;
	for(i=0;i<n;i++){   //��С�ķ�ǰ��
		for(j=n-1;j>i;j--){   //�Ӻ���ǰ�Ƚ�
			if(R[j].key<R[j-1].key){
				swap(R[j].key,R[j-1].key);
				flag=0;
			}
		}
		if(flag)
			break;
	}
}
//ð�����򣨴�ǰ����.ÿ�����ź��棩
void bubbleSort2(rectype R[],int n){
	int i,j,flag=1;
	for(i=n-1;i>=0;i--){  //ÿ�ν����ķź���
		for(j=0;j<i;++j){      //��ǰ����Ƚ�
			if(R[j].key>R[j+1].key){
				swap(R[j].key,R[j+1].key);
				flag=0;
			}
		}
		if(flag)
			break;
	}
}
//ð������֮����
//typedef struct sqNode{
//	infotype data;
//	struct sqNode *next;
//}sqList;
//void initialSqList(sqList *&L){
//	L=(sqList *)malloc(sizeof(sqList));
//	L->next=NULL;
//}
//void createSqList(sqList *&L,infotype str[],int n){
//	L=(sqList *)malloc(sizeof(sqList));
//	L->next=NULL;
//	sqList *p,*r=L;
//	for(int i=0;i<n;i++){
//		p=(sqList *)malloc(sizeof(sqList));
//		p->data=str[i];
//		r->next=p;
//		r=p;	
//	}
//	r->next=NULL;
//}
//void dispSqlist(sqList *L){
//	sqList *p=L->next;
//	while(p){
//		printf("%c,",p->data);
//		p=p->next;
//	}
//	printf("\n");
//}
//����ʵ�ֵľ��巽��
//void bubbleSort3(sqList *L){
//	   if (L == NULL) 
//	        return;  
//	    sqList* temp = L;  
//	    int swapped = 1;  
//	    while (swapped) {  
//	        swapped = 0;  
//	        sqList* prev = NULL;  
//	        temp = L;  
//	        while (temp->next != NULL) {  
//	            if (temp->data > temp->next->data) {  
//	                if (prev != NULL) {  
//	                    sqList* temp1 = temp->next;  
//	                    temp->next = temp1->next;  
//	                    temp1->next = temp;  
//	                    prev->next = temp1;  
//	                } else {  
//	                    sqList* temp1 = temp->next;  
//	                    temp->next = temp1->next;  
//	                    temp1->next = temp;  
//	                    L = temp1;  
//	                }  
//	                swapped = 1;  
//	            } else {  
//	                prev = temp;  
//	                temp = temp->next;  
//	            }  
//	        }  
//	    } 
//	//�Ӻ���ǰ��ÿ����С�ķ�ǰ��
//	sqList *p=L->next;
//	while(p){
//		
//	}
//}

//������������
int partition(rectype r[],int low,int high){
	int pivot=r[low].key;   //pivot�ǻ�׼���������˼������ÿ���õ�һ��Ԫ����Ϊ��׼
	while(low<high){   //�ҳ�low=high������λ��
		while(low<high && r[high].key>=pivot)//�ҳ��Ȼ�׼С��high
			high--;
		r[low].key=r[high].key;  //������С��ֵ�Ƶ��������
		while(low<high && r[low].key<=pivot)//��low��׼��ʱ������
			low++;  
		r[high].key=r[low].key;  //��������ֵ�Ƶ������ұ�
	}
	r[low].key=pivot; //����ѭ����ʾ��low=high���˴����������λ�ã�����Ҳ������high
	return low;  //����������±�
}
void quickSort(rectype r[],int low,int high){
	if(low<high){    //�ݹ��˳�������
		int pivot=partition(r,low,high);  //����������±꣬���л���
		quickSort(r,low,pivot-1);  //����������������
		quickSort(r,pivot+1,high);  //�������Ҳ��������
	}
}

//���������Ż���--ѡ��mid��Ϊ��׼
void quickSort2(rectype r[],int low,int high){
	int mid,pivot;
	mid=(low+high)/2;
	if(low<high){
		if(mid!=low)//����׼���������еĵ�һ��Ԫ�أ��������һ��Ԫ�ؽ���
			swap(r[mid].key,r[low].key); //���������ø��ˣ��ѻ�׼��ȥlow��λ�ã�ͳһ���� 
		pivot=partition(r,low,high);
		quickSort2(r,low,pivot-1);
		quickSort2(r,pivot+1,high);
	}
}



int main(){
	int n=8;
	rectype R4[MAXL];
	keytype c[]={15,6,0,7,9,3,10,30};
//	sqList *L;initialSqList(L);createSqList(L,d,n);dispSqlist(L);
//	bubbleSort3(L);dispSqlist(L);
	printf("ð������-------------------------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	bubbleSort2(R4,n);
	displist(R4,n);
	printf("��������-------------------------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	quickSort(R4,0,n-1);
	displist(R4,n);	
	printf("���������Ż�-------------------------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	quickSort2(R4,0,n-1);
	displist(R4,n);	
    return 0;
}
