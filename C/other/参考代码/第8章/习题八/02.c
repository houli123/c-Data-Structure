#include <stdio.h> 

struct library{
	char cname[15],canthor[15],cpublic[20];
	int iprice,irent;
};

int main(){
	int inum,i;
	printf("������Ҫ¼����ٱ��飺");
	scanf("%d",&inum);
	struct library book[inum];
	printf("�밴˳��ֱ�����ÿ��������������ۡ����ߡ������硢��������\n");
	for(i=0;i<inum;i++){
		scanf("%s%d%s%s%d",book[i].cname,&book[i].iprice,book[i].canthor,book[i].cpublic,&book[i].irent);	
	}	
	for(i=0;i<inum;i++){
		printf("������%s ���ۣ�%d ���ߣ�%s �����磺%s ��������%d\n",book[i].cname,book[i].iprice,book[i].canthor,book[i].cpublic,book[i].irent);
	}	
    return 0;
}
