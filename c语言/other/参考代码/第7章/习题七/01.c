#include <stdio.h> 
#include <math.h>
int fnGetBits(int ivalue,int ibegin,int iend){
	int i=ibegin,inum=0x0000;
	for(;i<=iend;i++){
		inum+=pow(2,i);
	}
	ivalue&=inum;
	return ivalue;
}

int main()
{
	int ivalue,ibegin,iend;
	printf("������Ҫ���������");
	scanf("%x",&ivalue);
	printf("������Ҫȡ�ڼ�λ���ڼ�λ��");
	scanf("%d%d",&ibegin,&iend);
	printf("ԭʼ����Ϊ��%x\n",ivalue);
	printf("ȡ���������Ϊ��%x",fnGetBits(ivalue,ibegin,iend));
    return 0;
}
