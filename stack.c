void push(int arr[],int s);
void pop(int arr[], int s );
void disp(int arr[], int s);
 int top=-1;

  int s,v,c;

int main()
{


    printf("Enter the size of array \n");
    scanf("%d",&s);

  int arr[s];

    printf("Press 1 for push \nPress 2 for pop \nPress 3 for display \nPress 4 for exit \n");
    do
    {
    printf("Enter your choice \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:push(arr,s);break;
        case 2:pop(arr,s);break;
        case 3:disp(arr,s);break;
        case 4:printf("Exit point \n");break;
    }
    }
            while(c<5);
    }

void push(int arr[],int s)
{

    if (top == s-1)
    {
        printf("Overflow \n");
    }
    else
    {
        top++;
        printf("Enter value \n");
        scanf("%d",&v);
        arr[top]=v;
    }
}
 void pop(int arr[], int s)
 {
     if (top<=-1)
     {
         printf("EMPTY STACK \n");

     }
     else
     {
           printf("The popped elements is %d \n",arr[top]);
           top--;

     }
 }
 void disp(int arr[], int s)
 {
     if(top>=0)
    {
        printf("The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",arr[i]);
        printf(" \nPress Next Choice \n");
    }
    else
    {
        printf("The STACK is empty \n");
    }
 }
