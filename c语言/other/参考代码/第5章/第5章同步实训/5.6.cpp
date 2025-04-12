#include "stdio.h"
int main()
{
   char cCode[30],cPass[30];
   int i;
   gets(cCode);
   i=0;
   while(cCode[i]!='\0')
      {
        if(cCode[i]>=65&&cCode[i]<=90)
           cPass[i] = 65+26-cCode[i]%65-1;
        else  if(cCode[i]>=97&&cCode[i]<=122)
           cPass[i] = 97+26-cCode[i]%97-1;

        i++;
      }
   cPass[i] = '\0';
   puts(cCode);
   puts(cPass);

  return 0;
}
