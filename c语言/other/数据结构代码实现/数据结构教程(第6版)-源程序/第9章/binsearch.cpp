//�۰�����㷨
#include "seqlist.cpp"

int BinSearch(RecType R[],int n,KeyType k) //�۰�����㷨
{	int low=0,high=n-1,mid;
	while (low<=high)			//��ǰ�������Ԫ��ʱѭ��
	{	mid=(low+high)/2;
		if (k==R[mid].key)		//���ҳɹ��������߼����mid+1
			return mid+1;
		if (k<R[mid].key)		//������R[low..mid-1]�в���
			high=mid-1;
		else					//k>R[mid].key
			low=mid+1;			//������R[mid+1..high]�в���
	}
	return 0;					//δ�ҵ�ʱ����0������ʧ�ܣ�
}

int BinSearch2(RecType R[],int n,KeyType k)
{	int low=0,high=n-1,mid;
	while (low<=high)			//����������һ�����߸���Ԫ��ʱ
	{	mid=(low+high)/2;
		if (k<=R[mid].key)
			high=mid-1;		//���������������
		else
			low=mid+1;		//���������������
	}
	return high+1;
}
int main()
{
	RecType R[MAXL];
	KeyType a[]={1,2,4,4,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);	
	CreateList(R,a,n);
	printf("���ұ�"); DispList(R,n);
	int k=4;
	printf("��һ�����ڵ���%d��λ��=%d\n",k,BinSearch(R,n,k));
	return 1;
}

/* 
int main()
{
	int n=11;
	RecType R[MAXL];
	KeyType a[]={2,3,10,15,20,25,28,29,30,35,40},k=20;
	CreateList(R,a,n);
	printf("���ұ�"); DispList(R,n);
	printf("R[%d]=%d\n",BinSearch(R,n,k),k);
	return 1;
}
*/
