int main()
{
    int s,l,b,ar,per;
    printf("Enter the side of square");
    scanf("%d" ,&s);
    ar=(s*s);
    printf("Area of square is %d" ,ar);
     per=4*s;
    printf("Perimeter of square is %d", per);
    printf("Enter the length and breadth of rectangle");
    scanf("%d %d",&l,&b);
    ar=l*b;
    per=2*(l+b);
    printf("Area of rectangle is %d" ,ar);
    printf("Perimeter of square is %d" ,per);
    return 0;

}
