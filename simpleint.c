int main()
{
   float p,r,t,si;
   printf("Enter principle ,rate and time");
    scanf("%f %f %f" ,&p ,&r, &t);
    si= (p*r*t)/100;
    printf("Interest is %f" ,si);
    return 0;
}
