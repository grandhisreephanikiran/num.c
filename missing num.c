#include <stdio.h>
int main() 
{
   int a[10],i,n,sum=0,misnum;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
       sum=sum+a[i];
   }
   n=n+1;
   misnum=n*(n+1)/2;
   printf("%d",misnum-sum);
    return 0;
}
