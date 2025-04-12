#include "stdio.h"
int main()
{
	float fScore ;
	printf("please input your score:");
	scanf("%f",&fScore);
	if((fScore>=90)&&(fScore<=100) )
		printf("your grade is A");
	else if(fScore>=80)
		printf("your grade is B");
	else if(fScore>=70)
		printf("your grade is C");
	else if(fScore>=60)
		printf("your grade is D");
	else if(fScore>0)
		printf("your grade is E");
	else
		printf("invalid input!"); 
		return 0;

}
