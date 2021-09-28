// simple queue on linked list

#define NULL 0
struct emp
{
    int id,sal;
    struct emp *ptr;
};
struct emp* start, *front, *rear;
void insert()
{
    struct emp *k;
    k=(struct emp *)malloc(sizeof(struct emp));
    printf("Enter id and sal  \n");
    scanf("%d %d",&k->id,&k->sal);
    k->ptr=NULL;
    if(rear== NULL)
        front=rear=k;
    else
    {
        rear->ptr=k;
        rear=k;
    }
}
void del()
{
     struct emp *k;
    if(front==NULL)
        printf("QUEUE EMPTY  \n");
    else
    {
        k=front;
        front=front->ptr;
        free(k);
    }
    if(front==NULL)
        rear=NULL;
}
void disp()
{
     struct emp *k;
    if(front==NULL)
        printf(" QUEUE EMPTY \n");
    else
    {
        k=front;
         printf("THE QUEUE IS \n");
        while(k)
        {
            printf("%d \n",k->id);
            printf("%d \n",k->sal);

            k=k->ptr;
        }
    }

}
int main()
{
    start=NULL;
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


