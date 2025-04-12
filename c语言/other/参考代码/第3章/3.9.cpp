#include "stdio.h"

int main()
{
	char cLicence;
	printf("Please input your driving licence:");
	scanf("%c",&cLicence);
	switch(cLicence)
	{
		case 'A':
			printf("you can drive bus,car and truck.");
			break;
		case 'B':
			printf("you can drive truck and car");
			break;
		case 'C':
			printf("you can drive car");
			break;
		case 'D':
			printf("you can drive autobike only");
			break;
		default:
			printf("input error!");
			
	 } 
	 return 0;
} 
