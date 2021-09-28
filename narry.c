int main()
{
    int i,j;
    int a[2][2],sum[i][j],b[2][2];
    printf("Enter the elements of array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
       for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
        printf("sum array is %d",sum[i][j]);

    }
     return 0;
}
