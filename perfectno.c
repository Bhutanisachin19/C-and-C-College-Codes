
int main()
{
    int no,i,a=0;
    printf("Enter a number");
    scanf("%d",&no);
    for(i=1;i<no;i++)
    {
        if(no%i==0)
        {
            a=a+i;
        }
    }
        if(a==no)
            printf("It is a perfect number");
        else
            printf("The entered number is not a perfect number");

        return 0;
}
