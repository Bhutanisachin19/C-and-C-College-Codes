#include<stdio.h>
struct emp
{
int eno;
int sal;
char name[20];
char dept[20];
}e1;
int cal();
int main()
{
 printf("Enter your details");
 printf("\nenter your emp no");
 scanf("%d",&e1.eno);
 fflush(stdin);
 printf("\nenter your name");
gets(e1.name);
printf("\nenter your basic pay");
scanf("%d",&e1.sal);
fflush(stdin);
printf("\nenter your department");
gets(e1.dept);


printf("%d %s %d %s",e1.eno,e1.name,e1.sal,e1.dept);
cal();
return 0;
}
int cal()
{

    int da,cca,hra;
    da=e1.sal*0.51;
    printf("\nda=%d",da);
    cca=100;
    printf("\ncca= 100");
    hra=0.15*e1.sal;
    if(hra>800)
    {
        printf("\nhra = 800") ;
    }
    else
    {
        printf("\nhra=%d",hra);

    }
}
