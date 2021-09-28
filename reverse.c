int main()
{
     int r,a,s=0;
    int t=a;
    printf("Enter a number");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        a=a/10;
        s=s*10+r;

    }
    printf("Reverse of the no is %d" ,s);
}
