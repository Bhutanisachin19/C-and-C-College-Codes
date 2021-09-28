int main()
{
    int *p;
    int a[]={1,2,3,4};
    p=&a[0];
    while(p<=&a[3])
    {
        printf("%d",p);
        printf("\n");
        p++;
    }
}
