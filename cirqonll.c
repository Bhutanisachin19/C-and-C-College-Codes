//circular queue on linked list
#define NULL 0
struct node
{
    int data;
    struct node *ptr;
};
struct node *front,*rear;
void insert()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data \n");
    scanf("%d",&temp->data);

    temp->ptr=NULL;

    if(front==NULL)
        front=rear=temp;
    else
    {
        temp->ptr=front;
        rear->ptr=temp;
        rear=temp;
    }
    rear->ptr=front;
}
void del()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
        printf("EMPTY QUEUE \n");
    else if(front==rear)
        front=rear=NULL;
    else
    {
        front=front->ptr;
        rear->ptr=front;
    }
    temp->ptr=NULL;
    free(temp);
}

void disp()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
        printf("EMPTY QUEUE");
    else
    {
        printf("THE QUEUE IS \n");
        do
        {
            printf("%d \n",temp->data);
            temp=temp->ptr;
        }while(temp!=front);
    }
}
int main()
{
    front=NULL;
    rear=NULL;
    int ch=0;
    while(ch<4)
    {
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:del();break;
            case 3:disp();break;
        }
    }
}


