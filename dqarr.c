//entry restricted using array
//del from both sides
int arr[6],s=6,f=-1,r=-1;
void insert()
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
void del_at_frnt()
{
    if(f==-1)
        printf("EMPTY");
    else if(f==r)
        f=r=-1;
    else
        f=f+1;
}
void del_at_rear()
{
    if(r==-1)
        printf("EMPTY");
    else if(r==f)
        r=f=-1;
    else
        r=r-1;
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
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n 4.Delete from end \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:del_at_frnt();break;
            case 3:disp();break;
            case 4:del_at_rear();break;
        }
    }
}
