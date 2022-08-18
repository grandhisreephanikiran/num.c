#include<stdio.h>
void main()
{
 int a[10],i,n,sum=0;
 scanf("%d",&n);
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
     if(a[i]%n==0)
        sum=sum+a[i];
 }
 printf("%d",sum);
}
