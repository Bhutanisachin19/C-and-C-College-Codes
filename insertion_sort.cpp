//insertion sort

#include<iostream>
using namespace std;

class In_sort
{
public:
    void insertion_srt(int arr[])
    {
        int temp,j;
        for(int i=1;i<8;i++)
        {
            //cout<<arr[i]<<endl;
            temp = arr[i];
            j=i-1;

            while( j>=0 && arr[j]>temp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]=temp;
        }

        //to display
        cout<<"Sorted array is "<<endl;

        for(int i=0;i<8;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int arr[] = {8,7,9,6,2,0,1,4};
    In_sort obj;
    obj.insertion_srt(arr);
}
