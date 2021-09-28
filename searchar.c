
#include<conio.h>
#include<stdio.h>
int main()
{
    int n,s,i;

    printf("ENter the size of array \n");
    scanf("%d",&s);

     int arr[s];
    printf("Enter the elements of the array \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements of array are\n");

    for(i=0;i<s;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }

    printf("ENter the element to be searched \n");
    scanf("%d",&n);

    //searching
    for(i=0;i<s;i++)
    {
       if(arr[i] == n)
        {
            printf("ELEMENT FOUND");
            break;
        }

    }
    if(i==s)
        printf("ELement not found");

return 0;
}

