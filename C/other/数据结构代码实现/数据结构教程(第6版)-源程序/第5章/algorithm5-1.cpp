//����5.1�����㷨����n!�ĵݹ��㷨
#include <stdio.h>
int fact(int n)					//ֱ�ӵݹ麯�� 
{
	if (n==1) 					//���1
		return 1;				//���2
	else 						//���3
		return fact(n-1)*n;		//���4
}
int fact1(int n,int ans)		//β�ݹ麯��
{
    if(n==1)
        return ans;
    else
        return fact1(n-1,n*ans);
}

int main()
{
	printf("5!=%d\n",fact(5));
	printf("5!=%d\n",fact1(5,1));
	return 1;
}

