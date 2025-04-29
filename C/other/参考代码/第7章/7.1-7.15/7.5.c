#include <stdio.h> 
int main()
{
	struct date_struct{
		unsigned int day:5;  //1 to 31
		unsigned int month:4;  //1 to 12
		unsigned int year:14;  //0 to 9999
	}stDate_byte;
	stDate_byte.day=12;
	stDate_byte.month=6;
	stDate_byte.year=2008;
	printf("%d,%d,%d",stDate_byte.day,stDate_byte.month,stDate_byte.year);
    return 0;
}
