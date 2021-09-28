#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter a two numbers \n");
    scanf("%d ,%d",&a,&b); // %d,%d is written so we enter input in this form only i.e 10,20
    printf("Numbers entered are %d and %d \n",a,b);

    result = a+b;
    printf("Addition is %d \n",result);
}
