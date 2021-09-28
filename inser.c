
//bubble sort using function
void sortt(int arr[],int a);
int main()
{
    int s,a,i,k,j;
    printf("ENter the size of array\n");
    scanf("%d",&a);
    int arr[a];
    printf("ENter the elements\n");
    for(i=0;i<a;i++)
    {

        scanf("%d",&arr[i]);
    }

   sortt(arr,a);
   for(i=0;i<a;i++)
   {
       printf("%d",arr[i]);

    }
}
    //sorting
void sortt(int arr[],int a)
{
    int i,k,j,s;

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {

            if(arr[j] > arr[j+1])
            {

                s=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=s;
            }
        }
    }
}

