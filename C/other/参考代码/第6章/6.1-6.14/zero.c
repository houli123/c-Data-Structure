#include <stdio.h>
int is1,is2,is3,iv;

int fnv(int ilong,int iwide,int ihight)
{
	is1=ilong*ihight;
	is2=iwide*ihight;
	is3=ilong*iwide;
	return ilong*iwide*ihight;
}
int main()
{
	int ilong,iwide,ihight;
	scanf("%d%d%d",&ilong,&iwide,&ihight);
	iv=fnv(ilong,iwide,ihight);
	printf("�����%d,�������%d,�������%d,�������%d",iv,is1,is2,is3);
    return 0;
}
