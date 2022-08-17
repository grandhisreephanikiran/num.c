#include <stdio.h>
int main() 
{
    int i,n;
    long int array[100];
    printf("enter the number range");
    scanf("%d",&n);
    array[0]=-1;
    array[1]=1;
    printf("\n fibonacci series\n");
    for(i=2;i<=n+1;i++)
    {
        array[i]=array[i-1]+array[i-2];
        printf("%d\n",array[i]);
    }
    return 0;
}
