
#include<conio.h>
#include<stdio.h>
int main()
{
    int n,s,i;

    printf("ENter the size of array");
    scanf("%d",&s);

     int arr[s];
    printf("Enter the elements of the array");
    for(i=0;i<=s;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements of array are");

    for(i=0;i<=s;i++)
    {
        printf("%d",arr[i]);
    }
}

