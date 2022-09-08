#include<stdio.h>
void main()
{
  int *a,n,i,sum=0,*p;
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  p=&a[0];
  for(i=0;i<n;i++)
  {
    scanf("%d",a+1);
    sum=sum+ *(a+1);
  }
  printf("%d",sum);
}
