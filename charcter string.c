#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    int i,n,upper=0,lower=0,count=0;
    char ch[100];
    printf("enter the string value:\n");
    gets(ch);
    for(i=0;ch[i]!=0;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            upper++;
        }
        else if(ch[i]>='a' && ch[i]<='z')
        {
            lower++;
        }
        if(ch[i]>='0' && ch[i]<='9')
        {
            count++;
        }
    printf("lowercase letters: %d\n",lower);
    printf("uppercase letters: %d\n",upper);
    printf("count of numbers : %d",count);
}
  return 0;
}
