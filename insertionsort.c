#include<stdio.h>
void insertionsort(int A[],int n)
{
    int i,j,v;
    for(i=2;i<=n-1;i++)
    {
        //printf("Hello");
        v=A[i];
        j=i;

        while(A[j-1] >v && j>=1)
        {
            A[j]=A[j-1];
            j--;
            //printf("Hello");
        }
        A[j]=v;
    }

for (i = 0; i < n; i++)
printf("%d ", A[i]);
        printf("\n");

}

/*
void printArray(int arr[], int n)
{
}
*/
int main()
{
    int i;
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, 5);

    //printArray(arr, n);
}
