#include <stdio.h>

int main() {
    int i,a[10],n;
    printf("enter size of the array:\n");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
        i++;
    }
    printf("%d\t",a[i]);
    return 0;
}
