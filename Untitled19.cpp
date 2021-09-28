#include<iostream>
using namespace std;
void pow(double m, int n=2)
{
    int res=1;
    if(n==2)
    {
        cout<<"square is \n";
        cout<<m*m;
    }
    else
    {
        for(int i=1;i<=n;i++)
    {
        res=res*m;
    }
    cout<<m <<"  to the power "<<n<< " is "<< res;
    }
}
int main()
{
        int ch=0,i,m,n;
    cout<<"Menu\n1.Power\n2.Square of Number\n";
    cout<<"Enter your choice : ";
    cin>>ch;
  if(ch==1)
        {
        cout<<"\nEnter the Number and its power : ";
        cin>>m>>n;
        pow(m,n);
        }
   else if(ch==2)
       {
        cout<<"\nEnter the Number : ";
        cin>>m;
        pow(m);
       }
       else
        cout<<"Wrong choice";
}
