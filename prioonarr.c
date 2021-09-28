//multi queue on array
//priority on multiqueue
int arr[9],s=9;
int f1=-1,f2=-1,r1=-1,r2=-1,f3=-1,r3=-1,pr;

void insert()
{
    printf("Enter priority \n");
    scanf("%d",&pr);


    if(pr==1)
    {
    if(f1==-1)
    {
        f1++;
        r1++;
         printf("Enter the element \n");
        scanf("%d",&arr[r1]);
        printf("Value Entered \n");
    }
    else if(r1==2)
    {
        printf("Queue 1 is full \n");
    }
    else
    {
        r1=r1+1;
         printf("Enter the element \n");
        scanf("%d",&arr[r1]);
        printf("Value Entered \n");

    }
    }

    else if(pr==2)
    {
         if(f2==-1)
    {
        f2=r2=3;
         printf("Enter the element \n");
        scanf("%d",&arr[r2]);
        printf("Value Entered \n");
    }
    else if(r2==5)
    {
        printf("Queue 2 is full \n");
    }
    else
    {
        r2=r2+1;
         printf("Enter the element \n");
        scanf("%d",&arr[r2]);
        printf("Value Entered \n");
    }
    }
    else if(pr==3)
    {
            if(f3==-1)
    {
        f3=r3=6;
         printf("Enter the element \n");
        scanf("%d",&arr[r3]);
        printf("Value Entered \n");
    }
    else if(r3==s-1)
    {
        printf("Queue 3 is full \n");
    }
    else
    {
        r3=r3+1;
         printf("Enter the element \n");
        scanf("%d",&arr[r3]);
        printf("Value Entered \n");
    }
    }
    else
        printf("ENter correct priority \n");
    }

void disp_1()
{
  int i;
    if(f1==-1)
    {
        printf("queue empty \n");
    }
    else
    {
         printf("1st queue is \n");
        for(i=f1;i<=r1;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void del()
{
    if (f1==-1)
    printf("EMPTY \n");

    else if(f1==r3)
    {
        f1=r3=-1;
        printf("Queue is empty now \n");
    }
    else
        {
            printf("The popped elements is %d \n",arr[f1]);
            f1=f1+1;

        }
}

void disp_2()
{
  int i;
    if(f2==-1)
    {
        printf("queue empty \n");
    }
    else
    {
         printf("2nd queue is \n");
        for(i=f2;i<=r2;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void disp_3()
{
  int i;
    if(f3==-1)
    {
        printf("queue empty \n");
    }
    else
    {
         printf("3rd queue is \n");
        for(i=f3;i<=r3;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}

int main()
{
    int ch=0;
    while(ch<6)
    {
        printf("Choose from the following! \n 1.Insert\n 2.Display 1st priority queue \n 3.Display 2nd priority queue \n 4.Display 3rd priority queue \n 5.Delete \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:disp_1();break;
            case 3:disp_2();break;
            case 4:disp_3();break;
            case 5:del();break;
        }
    }
}

