#include<stdio.h>
#include<stdlib.h>

struct equation
{
    int no;
    int pow;
    struct equation *next;
};


int main()
{
    int c;
    struct equation *start,*ptr;


    start=(struct equation *)malloc(sizeof(struct equation));
    ptr=start;

    printf("Enter 1st equation\n");

    while(1)
    {

        printf("Enter the no \n");
        scanf("%d",&ptr->no);
        printf("Enter power \n");
        scanf("%d",&ptr->pow);

        printf("Press 1 to continue \n");
        scanf("%d",&c);

        if(c==1)
        {
            ptr->next=(struct equation *)malloc(sizeof(struct equation));
            ptr=ptr->next;
        }
        else
        {
            ptr->next=NULL;
            break;
        }
    }

    // 2nd equation
    struct equation *start2,*ptr2;

    start2=(struct equation*)malloc(sizeof(struct equation));
    ptr2=start2;

    printf("Enter 2st equation \n");

    while(1)
    {

        printf("Enter the no \n");
        scanf("%d",&ptr2->no);
        printf("Enter power \n");
        scanf("%d",&ptr2->pow);

        printf("Press 1 to continue \n");
        scanf("%d",&c);

        if(c==1)
        {
            ptr2->next=(struct equation *)malloc(sizeof(struct equation));
            ptr2=ptr2->next;
        }
        else
        {
            ptr2->next=NULL;
            break;
        }
    }

    printf("Display 1st equation \n");
    struct equation *d1;
    d1=start;
    while(d1!=NULL)
    {
        printf("%d ->",d1->no);
        printf("%d ",d1->pow);
        printf("\n");
        d1=d1->next;
    }

    printf("Display 2nd equation \n");
    struct equation *d2;
    d2=start2;
    while(d2!=NULL)
    {
        printf("%d ->",d2->no);
        printf("%d ",d2->pow);
        printf("\n");
        d2=d2->next;
    }

   //3rd equation
    struct equation *front, *rear;
    front = NULL;
    rear = NULL;

    while(start && start2)
    {
        struct equation *k;

        k = (struct equation *)malloc(sizeof(struct equation));

        k->next=NULL;

    if(start->pow==start2->pow)
    {
        k->no=start2->no+start->no;
        k->pow=start->pow;
        start=start->next;
        start2=start2->next;

        if(front==NULL)
        {
            front=rear=k;
        }
        else
        {
            rear->next=k;
            rear=k;
        }

    }
    else if(start->pow > start2->pow)
    {
        k->pow=start->pow;
        k->no=start->no;
        start=start->next;

        if(front==NULL)
        {
            front=rear=k;
        }
        else
        {
            rear->next=k;
            rear=k;
        }
    }
    else if(start->pow < start2->pow)
    {
         k->pow=start2->pow;
        k->no=start2->no;
        start2=start2->next;

        if(front==NULL)
        {
            front=rear=k;
        }
        else
        {
            rear->next=k;
            rear=k;
        }

    }
   }

   printf("\nFinal result\n");
   struct equation *tmp;
   tmp=front;

   while(tmp) {
    printf("%d|",tmp->no);
    printf("%d->", tmp->pow);
    tmp=tmp->next;
   }
    return 0;
}


