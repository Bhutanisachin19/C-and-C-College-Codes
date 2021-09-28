/*
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node link;
int main()
{
    char c;
    link *start , *ptr;
    start =(link*)malloc(sizeof(link));
    ptr =start;
    while(1)
    {
        scanf("%d",&ptr->data);
        fflush(stdin);
        printf("Press y if you want to continue");
        scanf("%c",&c);

        if(c=='y' || c=='Y')
        {
            ptr->next=(link*)malloc(sizeof(link));
            ptr=ptr->next;
        }
        else
        {
            ptr->next=NULL;
            break;
        }

    }
    printf("Elements entered are");
    display();


}
void display()
{

    link *ptr,*start;
    ptr=start;
    while(ptr!=NULL)
    {

        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
*/
/*
#include<stdio.h>
void main()
{
    int a;
    float f;
    printf("Enter 2 nos");
    scanf("%d",&a);
    scanf("%f",&f);
    printf("%d", a);
    printf("       %f", f);
}
*/

#include<stdio.h>
#include<conio.h>
/*
#include <stdio.h>
void main()
{
    int array[5] = {5,6,7,8,9};
    int *i;
    int a=10;
     i=&array;
     printf("size is %d \n",sizeof(a));

     printf("%d \n",i);
     i++;

     printf("%d",i);


}
*/
/*
void main()
{
    int a = 10 ;
    float f = 9.5 ;
    int b =f;
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%f",f);

}
*/


//int main() { int a,b; a=b=4; b=a++; printf("%d%d%d%d",a++,--b,++a,b--); }
/*
#include <stdio.h>
void main()
{
int k = 8;
int m = 7;
k < m ? k = k + 1 : m = m + 1;
printf("%d", k);
}
*/
