#include<stdio.h>
void disp(int a[]);
int i;
int main()
{
    int a[5];
    printf("ENter the elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    disp(a);
}

void disp(int arr[])
{
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
}
