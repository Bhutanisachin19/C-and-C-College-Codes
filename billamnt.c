int main()
{
    int q;
    float v,d,t,dper,tper,bill;
    printf("Enter the quantity of the product");
    scanf("%d" ,&q);
    printf("Enter the value of product");
    scanf("%f" ,&v);
    printf("Enter the discount");
    scanf("%f" ,&d);
    printf("Enter the tax");
    scanf("%f" ,&t);
    dper=(d/100);
    tper=(t/100);
    bill=(q*v)-dper+tper;
    printf("the total bill amount is %f", bill);
    return 0;


}
