
//heap using array

int arr[10],parent,right,left;
int count=0,val;
void insert()
{
    printf("Enter the value : \n");
    scanf("%d",&val);

    if(count==0)
    {
         arr[count]=val;
         count++;

    }
    else
    {
        arr[count]=val;
        parent=(count-1)/2;
       // left=arr[(2*i)+1];
        // right=arr[(2*i)+2];

        while(count)
        {
            if(arr[count] > arr[parent])
            {
                int t;
                t=arr[parent];
                arr[parent]=arr[count];
                arr[count]=t;
            }
        }
        count++;
    }

}

void disp()
{
    for(int i=0;i<=count;i++)
    {
        printf("\nElements of heap are : \n");
        printf("%d",arr[i]);
    }
}

int main()
{
    int choice=0,c;
    while(choice<3)
    {
        printf("Press 1 to insert \nPress 2 for display \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insert();break;
            case 2:disp();break;
        }
    }
}


