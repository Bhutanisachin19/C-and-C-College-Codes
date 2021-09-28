
#define NULL 0


struct node
{
    int no;
    int priority;
    struct node *ptr;

};


struct node *f1, *f2,*f3, *r1, *r2, *r3;

void insert()
{
    struct node *k;
    k=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number \n");
    scanf("%d",&k->no);
    printf("Enter the priority between 1 & 3 \n");
    scanf("%d",&k->priority);
    k->ptr=NULL;


    //priority 1
    if(k->priority==1)
    {
        if(r1== NULL)
        f1=r1=k;
    else
    {
        r1->ptr=k;
        r1=k;
        r1->ptr=f2;
    }
    }


    //priority 2
    else if(k->priority==2)
    {
        if(r2==NULL)
            f2=r2=k;
        else
        {
            r2->ptr=k;
            r2=k;
            r2->ptr=f3;
        }
    }


    //priority 3
    else
    {
        if(r3==NULL)
            f3=r3=k;
        else
        {
            r3->ptr=k;
            r3=k;
        }
    }

}





void disp_p1()
{
    struct node *k;

    if(f1==NULL)
        printf("Queue is empty");
    else
    {
        k=f1;
        printf("The queue is \n");
        while(k)
        {
            printf("%d ->",k->no);
            printf("%d",k->priority);
              printf("\n");


            k=k->ptr;
        }
    }
}





void disp_p2()
{
    struct node *k;

    if(f2==NULL)
        printf("Queue is empty");
    else
    {
        k=f2;
        printf("The queue is \n");
        while(k)
        {
            printf("%d ->",k->no);
            printf("%d",k->priority);
              printf("\n");

            k=k->ptr;
        }
    }
}





void disp_p3()
{
    struct node *k;

    if(f3==NULL)
        printf("Queue is empty");
    else
    {
        k=f3;
        printf("The queue is \n");
        while(k)
        {
            printf("%d ->",k->no);
            printf("%d",k->priority);
            printf("\n");

            k=k->ptr;
        }
    }
}


int main()
{
    int ch=0;

    while(ch<5)
    {
         printf(" \nEnter choice\n 1.insert \n 2.disp 1 \n 3.disp 2 \n 4.disp 3  \n");
         scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert(); break;
            case 2: disp_p1();break;
            case 3: disp_p2();break;
            case 4: disp_p3();break;
        }
    }
}

