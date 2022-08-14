#include<stdio.h>
int main()
{
	int u,j;
	char ch='A';
	char ws1='a';
	for(u=1;u<=5;u++)
	{
		for(j=1;j<=u;j++)
		{
    	printf("%2c%c",ch,ws1);
    	ch++;
    	ws1++;
	   }
	printf("\n");
    }
