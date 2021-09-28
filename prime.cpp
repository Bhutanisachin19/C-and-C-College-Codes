#include<iostream>
using namespace std;
int main()
{
    int flag=0 ,a;
    cin>>a;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            flag=1;
    }

    if(flag==0)
        cout<<"prime";
    else
        cout<<" not prime";

}
