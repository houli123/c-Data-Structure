//����5.5�����㷨����һ��˳��������Ԫ�ء�
#include <stdio.h>
#define MaxSize 50
typedef int ElemType; 
typedef struct 
{	
	ElemType data[MaxSize];		//���˳���Ԫ��
   	int length;					//���˳���ĳ���
} SqList;						//˳��������

ElemType Max1(SqList L,int i)	//�ⷨ1����˳���L�����Ԫ��
{	ElemType max;
	if (i==0) return L.data[0];
	else
	{	max=Max1(L,i-1);
		if (max<L.data[i]) return L.data[i];
		else return max;
	}
}

ElemType Max2(SqList L,int i,int j)  //�ⷨ2����˳���L�����Ԫ��
{
	int mid;
	ElemType max,max1,max2;
	if (i==j) 
		max=L.data[i];				//�ݹ����
	else
	{	
		mid=(i+j)/2;
		max1=Max2(L,i,mid);			//�ݹ����1
		max2=Max2(L,mid+1,j); 		//�ݹ����2
		max=(max1>max2)?max1:max2;
	}
	return(max);
}
int main()
{
	int i;
	SqList L;
	ElemType a[]={3,1,5,8,0,2,4,7,9,6};
	for (i=0;i<10;i++)		//����˳���
		L.data[i]=a[i];
	L.length=10;
	printf("Max1:Max=%d\n",Max1(L,9));
	printf("Max2:Max=%d\n",Max2(L,0,9));
	return 1;
}
