//exit restricted

#include<stdlib.h>
struct emp
{
    int id,sal;
    struct emp *ptr;
};
struct emp* start, *front, *rear;





void insert_at_end()
{
    //problem
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





void insert_at_beg()
{
    struct emp *k;
    k= (struct emp *)malloc(sizeof(struct emp));
    printf("Enter id and sal  \n");
    scanf("%d %d",&k->id,&k->sal);
     k->ptr =NULL;

    if(front ==NULL)
    {
     front =rear=k;
    }
    else
    {
        k->ptr=front;
        front=k;
    }
}









void del()
{
    //del at begning
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
    while(ch<5)
    {
        printf("Choose from the following! \n1.Insert at beg  \n2.Insert at end  \n3.Delete \n4.Display \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_at_beg();break;
            case 2:insert_at_end();break;
            case 3:del();break;
            case 4:disp();break;
        }
    }


}
