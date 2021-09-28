int arr[5],size=5,top=-1,r=-1;

void q_insert()
{
    if(r==size-1)
        printf("Queue Full");
    else
    {
        if(top==-1)
        {
            top++;
        }
        r=r+1;
        printf("Enter Element: ");
        scanf("%d",&arr[r]);
        printf("Value Entered\n");
    }
}




void q_delete()
{
        if(top==-1)
            printf("Queue Empty");
        else if(top==r)
            top=r=-1;
            else
                top=top+1;
}



void display()
{
    int i;
    if(top==-1)
    {
        printf("queue empty");
    }
    for(i=top;i<=r;i++)
    {
        printf("%d\n",arr[i]);
    }

}

int main()
{
    int ch=0;
    while(ch<4)
    {
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:q_insert();break;
            case 2:q_delete();break;
            case 3:display();break;
        }
    }
}
