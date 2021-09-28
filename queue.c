void insert();
void del();
void disp();
int arr[5];
int f=-1,r=-1;
int c,s=5;
int main()
{

    do
   {
    printf("Press 1 for Insert \nPress 2 for Delete \nPress 3 for display \nPress 4 for exit \n");
    printf("Enter your choice \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:insert();break;
        case 2:del();break;
        case 3:disp();break;
        case 4:printf("Exit point \n");break;
    }
    }
            while(c<5);
    }
void insert()
{
    if (r==s-1)
    printf("Overflow \n");

    else
    {
        if(f==-1)
        {
            f++;
        }
        r=r+1;
        printf("Enter the element \n");
        scanf("%d",&arr[r]);
        printf("Value Entered \n");
    }
}

void del()
{
    if (f==-1)
    printf("EMPTY \n");

    else if(f==r)
    {
        f=r=-1;
        printf("Queue is empty now \n");
    }
    else
        {
            printf("The popped elements is %d \n",arr[f]);
            f=f+1;

        }
}

void disp()
{
  int i;
    if(f==-1)
    {
        printf("queue empty \n");
    }
    printf("The Queue is \n");
    for(i=f;i<=r;i++)
    {
        printf("%d\n",arr[i]);
    }

}

