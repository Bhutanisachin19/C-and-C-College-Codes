//selection sort

#include<iostream>
using namespace std;

class Sel_sort
{
public:
    void swapp(int *xp, int *yp)
    {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    }
    void select_srt(int arr[])
    {
        int lowest,j,pos,temp;

        for(int i=0;i<8;i++)
        {
            lowest = i;
            for(j=i+1;j<9;j++)
            {
                if(arr[j]<arr[lowest])
                         lowest = j;
            }
                swapp(&arr[lowest], &arr[i]);
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
    int arr[] = {8,7,9,6,2,0,1,4,0};
    Sel_sort obj;
    obj.select_srt(arr);
}

