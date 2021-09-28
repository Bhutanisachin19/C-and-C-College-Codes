//multi queue on array





int arr[10],s=10;
int f1=-1,f2=-1,r1=-1,r2=-1;






void insert_1()
{
    if(f1==-1)
    {
        f1++;
        r1++;
         printf("Enter the element \n");
        scanf("%d",&arr[r1]);
        printf("Value Entered \n");
    }
    else if(r1==4)
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







void insert_2()
{
    if(f2==-1)
    {
        f2=r2=5;
         printf("Enter the element \n");
        scanf("%d",&arr[r2]);
        printf("Value Entered \n");
    }
    else if(r2==s-1)
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






void disp_1()
{
  int i;
    if(f1==-1)
    {
        printf("queue empty \n");
    }
    printf("1st queue is \n");
    for(i=f1;i<=r1;i++)
    {
        printf("%d\n",arr[i]);
    }

}






void disp_2()
{
  int i;
    if(f2==-1)
    {
        printf("queue empty \n");
    }
    printf("2nd queue is \n");
    for(i=f2;i<=r2;i++)
    {
        printf("%d\n",arr[i]);
    }

}






int main()
{
    int ch=0;
    while(ch<5)
    {
        printf("Choose from the following! \n 1.Insert at 1st\n 2.Insert in 2nd \n 3.Display 1st queue \n 4.Display 2nd queue \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_1();break;
            case 2:insert_2();break;
            case 3:disp_1();break;
            case 4:disp_2();break;

        }
    }
}
