#include <stdio.h>
struct date{
	int iyear,imonth,iday;
};
struct student{
	char cname[8];
	int ieng;
	struct date stBirth;
};
int main(){
	struct student stOrg={"Tom",30,1888,2,4},stBak;
	stBak=stOrg;
	printf("%s,%d,%d-%d-%d",stBak.cname,stBak.ieng,stBak.stBirth.iyear,stBak.stBirth.imonth,stBak.stBirth.iday);
}
