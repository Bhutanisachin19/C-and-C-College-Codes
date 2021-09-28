//queue on double linked list
#define NULL 0

struct node
{
    int data;
    struct node *prev ,*next;
};



struct node *front,*rear;




void insert()
{
    struct node *k;
    k=(struct node *)malloc(sizeof(struct node));
    k->next=NULL;
    k->prev=NULL;

    printf("Enter the value \n");
    scanf("%d",&k->data);

    if(rear==NULL)
    {
        front=rear=k;
        k->next=NULL;
        k->prev=NULL;
    }
    else if(front==rear)
    {
         rear->next=k;
         k->next=NULL;
         k->prev=front;
         rear=k;

    }
    else
    {
        rear->next=k;
        k->next=NULL;
        k->prev=rear;
        rear=k;
    }
}







void del()
{
    struct node *k,*f;

    if(front==NULL)
        printf("Empty queue \n");
    else
    {
        k=front;
        printf("Deleted element is ");
        printf("%d \n",k->data);
        f=front->next;
        f->prev=NULL;
        front=f;
        free(k);
    }
}






void disp()
{
    struct node *k;

    if(front==NULL)
        printf("Empty Queue \n");
    else
    {
        k=front;
        printf("the queue is \n");
        while(k)
        {
            printf("%d",k->data);
            printf("\n");

            k=k->next;

        }
    }
}






void disp_from_back()
{
    struct node *k;

    if(front==NULL)
        printf("Empty Queue \n");
    else
    {
        k=rear;
        printf("The queue from rear is \n");
        while(k)
        {
            printf("%d",k->data);
            printf("\n");

           k=k->prev;

        }
    }
}



int main()
{
    front=NULL;
    rear=NULL;
    int ch=0;
    while(ch<5)
    {
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n 4.Display from end \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:del();break;
            case 3:disp();break;
            case 4:disp_from_back();break;
        }
    }


}

