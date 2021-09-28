#include<iostream>
using namespace std;
template < class T >

void sort_arr(T arr)
{
    int i,j;
     T a;
    for (i = 0; i < 5; ++i)
        {
            for (j = i + 1; j < 5; ++j)
            {
                if (arr[i] > arr[j])
                {
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    cout<<"Sorted array is :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={9,3,10,0,8};
    sort_arr(arr);
}

