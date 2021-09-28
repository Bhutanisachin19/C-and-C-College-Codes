int main()
{
    int i,s,v,pos;
    printf("ENter the size of an array \n");
    scanf("%d",&s);

    int arr[s];
    printf("ENter the values of array \n");

    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the postion where you want to insert the element \n");
    scanf("%d",&pos);

    if(pos > s || pos < 0)
    {
        printf("Invalid position \n");
    }
    printf("Enter the value \n");
    scanf("%d",&v);

    for(i=0;i<=pos;i++)
    {

        arr[i]=arr[i+1];
    }
    arr[pos]=v;

    printf("Resulted array is \n");

    for(i=0;i<s;i++)
    {
        printf("%d",arr[i]);
    }

}

