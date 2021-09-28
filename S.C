#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
int i;

printf("Enter the two strings :\n");
gets(str1);
gets(str2);
i=0;
while(str1[i]==str2[i] && str1[i]!='\0')
i++;
if(str1[i]>str2[i])
printf("String 1 is greatest");
else if(str1[i]<str2[i])
printf("String 2 is greatest");
else
printf("Strings are equal");
getch();

}
