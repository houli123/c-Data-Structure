#include<stdio.h>
int main()
{
	int ix,iy,imax;  //imaxΪix��iy�������� 
	printf("����������������");
	scanf("%d%d",&ix,&iy);
	imax = ix>iy?ix:iy;//���������Ϊ����ִ���м���ʽ
	printf("imax=%d",imax);//����ִ�����ı��ʽ 
	return 0;
}
