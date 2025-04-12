#include "stdio.h"
int main()
{
	float fWeight;
	printf("Please input the weight.");
	scanf("%f",&fWeight);
	if(fWeight>0){
		if(fWeight<=5)
		  	printf("cost is %f",fWeight*3);
		else if(fWeight<=10)
				printf("cost is %f",(3*5+3.5*(fWeight-5)));
		  	 else if(fWeight<=20)
						printf("cost is %f",(3*5+3.5*5+4*(fWeight-10)));
					else if(fWeight<=30)
							printf("cost is %f",(3*5+3.5*5+4*10+4.5*(fWeight-20)));
					  	 else if(fWeight<=50)
					  		 		printf("cost is %f",(3*5+3.5*5+4*10+4.5*10+5*(fWeight-30)));
					  			else
					  				printf("reject acception");
	}
	return 0;
}
