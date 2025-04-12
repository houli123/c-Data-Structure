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
		printf("比较任性");
	else if(ia>=3 && ia<=5)
		printf("过于自信");
	else if(ia>5)
		printf("少年温顺，老来强硬");
    return 0;
}
