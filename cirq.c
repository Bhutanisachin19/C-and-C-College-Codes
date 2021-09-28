//using array
int arr[5];
int s=5,f=-1,r=-1;
void insert()
{
    if(f==0 && r==s-1)
       { printf("OVERFLOW \n");}
    else if (r==-1)
    {
        f++;
        r++;
        printf("Enter the element \n");
        scanf("%d",&arr[r]);
        printf("VALUE ENTERED \n");
    }
    else if(r==s-1)
    {
        r=0;
        printf("Enter the element \n");
        scanf("%d",&arr[r]);
        printf("VALUE ENTERED \n");
    }
    else
    {
        r=r+1;
        printf("Enter the element \n");
        scanf("%d",&arr[r]);
        printf("VALUE ENTERED \n");
    }
}
void del()
{
    if(f==-1)
        printf("EMPTY QUEUE \n");
    else if(f==r)
    {
        printf("\n %d deleted", arr[f]);
        f=-1;
        r=-1;
    }
    else if(f==s-1)
    {
         printf("\n %d deleted", arr[f]);
        f=0;
    }
    else
        {
             printf("\n %d deleted", arr[f]);
            f++;

        }
}
void disp()
{
  int i;
    printf("\n");
    if (f>r)
    {
        for (i = f; i<s; i++)
        {
            printf("%d ", arr[i]);
        }
        for (i = 0; i <= r; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for (i = f; i <=r; i++)
            printf("%d ", arr[i]);
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
            case 1:insert();break;
            case 2:del();break;
            case 3:disp();break;
        }
    }
}
