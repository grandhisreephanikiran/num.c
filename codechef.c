#include<stdio.h>
int main(void){
    int arr[4],flag=0,i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=10)
        {
            flag++;
        }
    }
    printf("%d",flag);
return 0;
}
