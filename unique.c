#include <stdio.h>
int main() 
{
    int a[5],i,j,num,pha=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&i);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==a[i+1])
        pha++;
    }
    if(pha>=1)
    printf("unique");
    else
    {
        printf("duplicate");
    }
    return 0;
}
