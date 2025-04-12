#include <stdio.h>
int itest(char cs1){
	if (cs1<='z' && cs1>='a')
		return 1;
	else 
		return 0;
}
int main()
{
	char cs[30];
	int i=0,isum=0;
	gets(cs);
	while(cs[i]!='\0'){
		isum+=itest(cs[i]);
		i++;
	}printf("sum=%d",isum);
	return 0;
}
