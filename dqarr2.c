//exit restricted
//insert from both sides

// insert at front  function problem

int arr[6],s=6,f=-1,r=-1;
void insert_at_end()
{
    if(r==s-1)
        printf("QUEUE IS FULL");
    else
    {
            if(f==-1)
            f++;
    r=r+1;
    printf("Enter value \n");
    scanf("%d",&arr[r]);
    printf("Value Entered \n");
    }

}
void insert_at_front()
{
    int i;

    if(r==s-1)
        printf("Queue is full \n");
    else if(f==-1)
    {
         f=r=0;
        printf("Enter value \n");
        scanf("%d",&arr[f]);
        printf("Value Entered \n");
    }

    else
    {
        for(i=s;i>=f;i--)
        {
            arr[i]=arr[i-1];
        }
        r=r+1;
            printf("Enter value \n");
            scanf("%d",&arr[f]);
            printf("Value Entered \n");
    }
}
void del()
{

    // del at front
    if(f==-1)
        printf("EMPTY \n");
    else if(f==r)
        f=r=-1;
    else
        f=f+1;
}
void disp()
{
    printf("THE QUEUE IS \n");
  int i;
    if(f==-1)
    {
        printf("queue empty");
    }
    for(i=f;i<=r;i++)
    {
        printf("%d\n",arr[i]);
    }

}
int main()
{

     int ch=0;
     while(ch<5)
    {
        printf("Choose from the following! \n 1.Insert at front \n 2.Delete \n 3.Display \n 4.Insert from end \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_at_front();break;
            case 2:del();break;
            case 3:disp();break;
            case 4:insert_at_end();break;
        }
    }
}

