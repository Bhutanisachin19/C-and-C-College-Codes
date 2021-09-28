//entry restricted


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

void del_at_begn()
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




void del_at_end()
{
    if(front==NULL)
        printf("cannot del queue is empty \n");
    else if(front==rear)
    {
        free(rear);
        rear=front=NULL;
    }
    else
  {
    struct emp *k;
    k=front;
    while(k->ptr!=rear)
    {
        k=k->ptr;
    }
    free(k->ptr);
    k->ptr=NULL;
    rear=k;
  }

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
    while(ch<5)
    {
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n 4.Delete from end \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:del_at_begn();break;
            case 3:disp();break;
            case 4:del_at_end();break;
        }
    }


}
