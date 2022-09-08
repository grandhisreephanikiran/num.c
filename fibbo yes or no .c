#include<stdio.h>
void main()
{
  int i=0,f=0,f1=1,f2,n;
  printf("%d ",f);
  for(i=0;i<10;i++)
  {
    f=f1;
    f1=f2;
    f2=f+f1;
    printf("%d ",f2);
  }
  scanf("%d",&n);
       if(n==0)
        printf("YES");
         for(i=0;i<10;i++)
         {
            if(f2[i]==n)
              printf("NO");
            else
              printf("Yes");
         }

}
