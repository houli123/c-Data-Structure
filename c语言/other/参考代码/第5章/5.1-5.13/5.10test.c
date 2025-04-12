#include <stdio.h> 
#define N 100
int main()
{
	char ch[N];int i=0;
	scanf("%c",&ch[i]);
	while(ch[i]!='0'){
		i++;
		scanf("%c",&ch[i]);
	}
	i=0;
	while(ch[i]!='0'){
		printf("%c",ch[i]);
		i++;
	}
    return 0;
}
