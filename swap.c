

int main()
{
int a,b,c;
printf("Enter two values");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("values after swapping are a=%d b=%d" ,a,b);
return 0;
}
