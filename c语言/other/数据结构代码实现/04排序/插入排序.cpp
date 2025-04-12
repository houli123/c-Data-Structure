#include <stdio.h> 
#define MAXL 100

typedef int keytype;
typedef char infotype;
typedef struct{
	keytype key;
	infotype data;
}rectype;

//ֱ�Ӳ�������,�ҵ�
void insertSort(rectype R[],int n){
	int i=1,temp,k;
	for(;i<n;i++){   //����0��1����ִ��
		if(R[i-1].key>R[i].key){
			temp=R[i].key;  
			//��ǰ����ڵ�������
			k=i-1;    //�����ǰһ��
			while(R[k].key>temp && k>=0){  //�����ȶ�������
				R[k+1]=R[k];
				k--;
			}
			R[k+1].key=temp;
		}
	}
}
//���������ڱ�ʵ�֣�0�ճ�������������ʱ���±��1��ʼ��
void insertSort2(rectype R[],int n){
	int i=2,k;
	for(;i<=n;i++){   //����0��1����ִ��
		if(R[i-1].key>R[i].key){
			R[0].key=R[i].key;  //ÿ�ν���Ҫ��������ݷŵ��ڱ�λ
			k=i-1;  
			while(R[k].key>R[0].key){ //�����ڱ�����Ҫ���ж�k>=0����R[k]==�ڱ�ʱ������ѭ��
				R[k+1]=R[k];
				k--;
			}
			R[k+1].key=R[0].key;  //�����ڱ�
		}
	}
}
//�۰���룬���ٱȽϴ����������ƶ���������һ����
void binInsertSort(rectype R[],int n){
	int i,temp,k,low,high,mid;
	for(i=1;i<n;i++){   //����0��1����ִ��
		if(R[i-1].key>R[i].key){
			temp=R[i].key;  
			//��ǰ����ڵ�������
			low=0;high=i-1;
			while(low<=high){
				mid=(low+high)/2;
				if(temp<R[mid].key)
					high=mid-1;
				else
					low=mid+1;
			}
			for(k=i-1;k>=high+1;k--)
				R[k+1]=R[k];
			R[high+1].key=temp;
		}
	}
}
//�ڱ�ʵ��
void binInsertSort2(rectype R[],int n){
	int i,k,low,high,mid;
	for(i=2;i<=n;i++){
		low=1,high=i-1;
		R[0].key=R[i].key;
		while(low<=high){
			mid=(low+high)/2;
			if(R[0].key<R[mid].key)
				high=mid-1;
			else   //Ϊ�˱����ȶ��ԣ�Ӧ������ͬԪ�ص��ұ߽��в��룬�Ǿ���Ҫ���ʱ���������ұ߽��в���
				low=mid+1;	
		}
		for(k=i-1;k>=low;k--)  //��high+1����low����
			R[k+1].key=R[k].key;
		R[low].key=R[0].key;
		
	}
}
//ϣ������������0���±꣩
void shellSort(rectype R[],int n){
	int d,j,i;
	for(d=n/2;d>=1;d/=2){  //d��ʾ������������֮��ľ���
		for(i=d+1;i<=n;i++){  //�±�0�������ݣ���1��ʼ�ţ�����i=d+1�����Ʋ���������i=1һ�����ŵ��ڶ�������
			R[0].key=R[i].key;  //�����õ��ڱ���0���ݴ�������	
			j=i-d;  //j���ǵ�һ����
			for(;j>0 && R[j].key>R[i].key;j-=d)
				R[j+d].key=R[j].key;
			R[j+d].key=R[0].key;
		}
	}
}
//ϣ�����򣨿α���
void shellSort2(rectype R[],int n){
	int d,j,i,temp;  //������ʱ������������0�±��λ���ݴ棬�������һ�����ݻ��Ƿŵ�1λ��
	for(d=n/2;d>=1;d/=2){
		for(i=d;i<n;i++){
			temp=R[i].key;  
			j=i-d;
			for(;j>=0 && R[j].key>R[i].key;j-=d)
				R[j+d].key=R[j].key;
			R[j+d].key=temp;
		}
	}
}





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
int main(){
	int n=8;
	rectype R4[MAXL];
	keytype c[]={15,6,0,7,9,3,10,30};
	printf("��������--------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	insertSort(R4,n);
	displist(R4,n);
	printf("�۰��������--------------------\n");
	createlist(R4,c,n);
	displist(R4,n);
	binInsertSort(R4,n);
	displist(R4,n);
	printf("ϣ������--------------------\n");
	createlist2(R4,c,n);
	displist2(R4,n);
	shellSort(R4,n);
	displist2(R4,n);
    return 0;
}
