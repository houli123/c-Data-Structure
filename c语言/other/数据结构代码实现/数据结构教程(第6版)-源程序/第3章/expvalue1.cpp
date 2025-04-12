//��򵥱��ʽ��ֵ
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MaxSize 100
//---------------------------------------------------------
//--�����ջ��������---------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
char* trans(char *exp)					//���������ʽexpת���ɺ�׺���ʽpostexp
{
	int n=strlen(exp);
	char *data=(char*)malloc(n*sizeof(char));	//dataģ�������ջ
	int top=-1;									//��ʼ�������ջ
	char* postexp=(char*)malloc(2*n*sizeof(char));	//��ź�׺���ʽ	
	char e;
	int i=0,j=0;						//i����exp,j��Ϊpostexp���±�
	while (i<n)							//exp���ʽδɨ����ʱѭ��
	{	switch(exp[i])
		{
		case ' ': i++; break;				//�����ո� 
		case '(':						//�ж�Ϊ������
			top++; data[top]=exp[i++];				//�����Ž�ջ
			break;
		case ')':						//�ж�Ϊ������
			e=data[top]; top--;			//��ջԪ��e
			while (e!='(')				//��Ϊ'('ʱѭ��
			{
				postexp[j++]=e;			//��e��ŵ�postexp��
				e=data[top]; top--;			//������ջԪ��e
			}
			i++;						//����ɨ�������ַ�
			break;
		case '+':						//�ж�Ϊ�ӻ����
		case '-':
			while (top!=-1)	            //ջ����ѭ��
			{
				e=data[top];			//ȡջ��Ԫ��e
				if (e!='(')				//e����'('
				{
					postexp[j++]=e;		//��e��ŵ�postexp��
					e=data[top]; top--;		//��ջԪ��e
				}
				else					//e��'(ʱ�˳�ѭ��
					break;
			}
			top++; data[top]=exp[i++];			//��'+'��'-'��ջ
			break;
		case '*':						//�ж�Ϊ'*'��'/'��
		case '/':
			while (top!=-1)	//ջ����ѭ��
			{
				e=data[top];			//ȡջ��Ԫ��e
				if (e=='*' || e=='/')	//��ջ��'*'��'/'�������ջ����ŵ�postexp��
				{
					postexp[j++]=e;		//��e��ŵ�postexp��
					e=data[top]; top--;		//��ջԪ��e
				}
				else					//eΪ��'*'��'/'�����ʱ�˳�ѭ��
					break;
			}
			top++; data[top]=exp[i++];		//��'*'��'/'��ջ
			break;
		default:				//���������ַ�
			while (exp[i]>='0' && exp[i]<='9') //�ж�Ϊ����
			{
                if (exp[i]==' ')
                {
                    i++;
                    continue;
                }
                postexp[j++]=exp[i++];
            }
			postexp[j++]='#';	//��#��ʶһ����ֵ������
		}
	}
	while (top!=-1)	//��ʱexpɨ�����,ջ����ʱѭ��
	{
		e=data[top]; top--;		//��ջԪ��e
		postexp[j++]=e;			//��e��ŵ�postexp��
	}
	postexp[j]='\0';			//��postexp���ʽ��ӽ�����ʶ
	free(data);		//����ջ		
	return postexp;
}
//---------------------------------------------------------
//--������ջ��������---------------------------------------

int compvalue(char *postexp)	//�����׺���ʽ��ֵ
{
	long a,b,c,d,e;
	int n=strlen(postexp);
	int *data=(int*)malloc(n*sizeof(int));	//dataģ��������ջ
	int top=-1;								//��ʼ��������ջ
	int i=0;							    //i����postexp
	while (postexp[i])		                //postexp�ַ���δɨ����ʱѭ��
	{	
		switch (postexp[i])
		{
		case '+':						//�ж�Ϊ'+'��
			a=data[top]; top--;			//��ջԪ��a
			b=data[top]; top--;			//��ջԪ��b
			c=b+a;						//����c
			top++; data[top]=c;			//��������c��ջ
			break;

		case '-':						//�ж�Ϊ'-'��
			a=data[top]; top--;			//��ջԪ��a
			b=data[top]; top--;			//��ջԪ��b
			c=b-a;						//����c
			top++; data[top]=c;			//��������c��ջ
			break;

		case '*':						//�ж�Ϊ'*'��
			a=data[top]; top--;			//��ջԪ��a
			b=data[top]; top--;			//��ջԪ��b
			c=b*a;						//����c
			top++; data[top]=c;			//��������c��ջ
			break;

		case '/':						//�ж�Ϊ'/'��
			a=data[top]; top--;			//��ջԪ��a
			b=data[top]; top--;			//��ջԪ��b
			c=b/a;						//����c
			top++; data[top]=c;			//��������c��ջ
			break;

		default:				//���������ַ�
			d=0;				//�������������ַ�ת���ɶ�Ӧ����ֵ��ŵ�d��
			while (i<n && postexp[i]>='0' && postexp[i]<='9')   //�ж�Ϊ�����ַ�
			{	d=10*d+postexp[i]-'0';  
				i++;
			}
			top++; data[top]=d;		//����ֵd��ջ
			break;
		}
		i++;				//�������������ַ�
	}
	e=data[top];			//ȡջ��Ԫ��e
	free(data);		        //����ջ		
	return e;					//����e
}
int calculate(char* s)
{
    if (strlen(s)==1) return s[0]-'0';
	char* postexp;
	postexp=trans(s);
    return compvalue(postexp);
}
int main()
{
	char exp[]="2147483647";
	char* postexp;
	postexp=trans(exp);
	printf("��׺���ʽ:%s\n",exp);
	printf("��׺���ʽ:%s\n",postexp);
	printf("���ʽ��ֵ:%d\n",compvalue(postexp));
	return 1;
}
