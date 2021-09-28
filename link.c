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
}
