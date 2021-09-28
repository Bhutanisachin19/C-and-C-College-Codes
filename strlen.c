#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int l,i,c,n;
    char str[50];
    printf("Enter a string : \n");
    gets(str);
    printf("Enter your choice 1 for function and 2 to calculate without function");
    scanf("%d",&c);
    switch(c)
           {


   case 1:
            n=strlen(str);
            printf("Length of a string is %d",n);
            break;
   case 2:
            while(str[l]!='\0')

                l++;
                printf("Length of string is %d",l);

           }
           return 0;
}
