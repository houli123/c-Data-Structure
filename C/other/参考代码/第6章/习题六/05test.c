#include <stdio.h> 
long fnsum(int k,int n)
{
	long isum=0,inum=1;
	int i,l;
	for(i=1;i<=n;i++){
		inum=1;
		for(l=0;l<k;l++){
			inum*=i;
		}
		isum+=inum;
	}
	return isum;
}
int main()
{
	int k,n;
	printf("��ֱ�����k��n��ֵ��");
	scanf("%d%d",&k,&n);
	printf("%ld",fnsum(k,n));
    return 0;
}
