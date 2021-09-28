#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter string one : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);

    strcat(str1,str2);
    puts(str1);
}
