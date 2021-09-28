int main()
{
    int r,a,s=0;
    int t=a;
    printf("Enter a number");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;

    }
     if(t==s)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");

            return 0;
}
