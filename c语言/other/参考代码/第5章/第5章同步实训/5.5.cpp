#include "stdio.h"
int main()
{
   char cTitle[40];
   int iUpper=0,iLower=0,iDigit=0,iOther=0,i;
   gets(cTitle);
   i=0;
   while(cTitle[i]!='\0')
   { if(cTitle[i]>=65&&cTitle[i]<=90)
        iUpper++;
     else if(cTitle[i]>=97&&cTitle[i]<=122)
             iLower++;
          else if(cTitle[i]>=48&&cTitle[i]<=57)
                  iDigit++;
               else
                  iOther++;
    i++;
   }
      printf("大写字母个数 %d\n",iUpper);
      printf("小写字母个数 %d\n",iLower);
      printf("数字个数 %d\n",iDigit);
      printf("其他字符个数 %d\n",iOther);
   return 0;
}
