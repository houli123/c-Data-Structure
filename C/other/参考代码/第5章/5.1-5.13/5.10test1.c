#include <stdio.h> 
#define N 100
int main()
{
	char ch[N];int i=0,ia=0;
	scanf("%c",&ch[i]);
	while(ch[i]!='0'){
		if(ch[i]=='a')
			ia++;
		i++;
		scanf("%c",&ch[i]);
	}
	i=0;
	while(ch[i]!='0'){
		printf("%c",ch[i]);
		i++;
	}
	if(ia<3)
		printf("�Ƚ�����");
	else if(ia>=3 && ia<=5)
		printf("��������");
	else if(ia>5)
		printf("������˳������ǿӲ");
    return 0;
}
