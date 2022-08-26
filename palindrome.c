#include <stdio.h>
int main() 
{
    char string[25], reverse_string[25] 
    int i, length, flag = 0;
 
    printf("Enter a string \n");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the string '%s' = %d\n", string, length);
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       printf (" palindrome \n", string);
    else
       printf(" palindrome \n", string);
    return 0;
}
