#include<string.h>
#include<stdio.h>
int main()
{
    printf("Enter a string \n");
    int i=0;
    char str[4][10];
    for(i=0;i<=3;i++)
    {
        gets(str[i]);

    }
    printf("entered string is \n");
    for(i=0;i<=3;i++)
    {
        puts(str[i]);

    }
}
