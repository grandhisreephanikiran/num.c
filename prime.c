#include<stdio.h>
int main()
{
    int arr[100],flag,i,n,k,j;
    printf("enter array size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(k=n-1;k>=0;k--)
    {
        flag=0;
        for(j=1;j<=arr[k];j++)
        {
            if(arr[k]%j==0)
            {
                flag++;
            }
        }
        if(flag==2)
        {
            printf("%d\t",arr[k]);
        }
    }
return 0;
}
