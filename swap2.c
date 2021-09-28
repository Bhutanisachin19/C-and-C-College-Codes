int main()
{
    int a,b;
printf("Enter two values");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("values after swapping are a=%d and b=%d" ,a,b);
return 0;

}
