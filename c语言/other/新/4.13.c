#include <stdio.h> 
#include <math.h>
int main(){
	float f1,f2;char ch='0';
	while(ch!='#'){
		printf("�����������ļ��㣺");
		scanf("%f%c%f",&f1,&ch,&f2);
		switch(ch){
			case '+':
				printf("%.1f+%.1f=%.1f\n",f1,f2,f1+f2);break;
			case '-':
				printf("%.1f-%.1f=%.1f\n",f1,f2,f1-f2);break;
			case '*':
				printf("%.1f*%.1f=%.1f\n",f1,f2,f1*f2);break;
			case '/':
				if(fabs(f2)>1e-6)
					printf("%.1f*%.1f=%f.1\n",f1,f2,f1/f2);
				else
					printf("��ĸΪ0��������\n");
				break;
			default:
				printf("δ֪����\n");
		}
	}
    return 0;
}
