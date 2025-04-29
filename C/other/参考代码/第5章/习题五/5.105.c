#include <stdio.h>
#define N 40
void main()
{
	int iD=0,iX=0,iS=0,iQ=0,i=0;//iD:大写字母, iX:小写字母, iS:数字, iQ:其他字符 
	char chead[N];
	printf("请输入一篇英文学术文章的标题（只计算前40个字符）：\n");
	gets(chead);
	while(chead[i] != '\0')
	{
		if (chead[i]>=65 && chead[i]<=90)
			iD++;
		else if (chead[i]>=97 && chead[i]<=122)
			iX++;
		else if (chead[i]>=48 && chead[i]<=57)
			iS++;
		else
			iQ++;
		i++;
		if(i==N)	
			break;
	}
	printf("大写字母有%d个，小写字母有%d个，数字有%d个，其他字符有%d个",iD,iX,iS,iQ);
} 
