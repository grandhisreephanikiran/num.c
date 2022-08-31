#include<stdio.h>
#include<string.h>
void main()
{
  char s[1000];
  int i;
  gets(s);
  for(i=0;s[i]!=0;i++)
  {
   if(s[i]=='a')
   printf("%c",toupper(s[i]));
   else
    printf("%c",s[i]);
   }
}
