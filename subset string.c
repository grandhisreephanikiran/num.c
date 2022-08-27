#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int n,i,j,k;
	n=strlen(s);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			int x=i+j;
			for(k=j;k<x;k++)
			{
				printf("%3c",s[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
