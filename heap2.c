
// heap using array
//wrong output
//using function (book)

int heap[20];
int v,count=0,left,right;
int temp,parent;


void insert()
{
    printf("Enter a value : \n");
    scanf("%d",&v);


    if(count==0)
    {
        heap[count]=v;
        count++;
    }
    else if(count > 0)
    {
         heap[count]=v;
        parent=count/2;

        if(heap[parent] < heap[count])
        {
            temp=heap[count];
            heap[count]=heap[parent];
            heap[parent]=temp;
            reheapifyupwards(heap,parent);
            count++;
        }
        else
        {
            heap[count]=v;
            count++;
        }
        }
    }


void reheapifyupwards(int heap[],int count)
{
    if(count > 1)
    {
        parent = count/2;

        if(heap[parent] < heap[count])
        {
            temp=heap[count];
            heap[count]=heap[parent];
            heap[parent]=temp;
            reheapifyupwards(heap,parent);
        }

    }
}
void disp()
{
    for(int i=0;i<=count;i++)
    {
        printf("\nElements of heap are : \n");
        printf("%d",heap[i]);
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
