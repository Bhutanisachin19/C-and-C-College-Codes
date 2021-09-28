
#include<iostream>
using namespace std;
/*
template <class h,int s=5>
class hello
{
    h a[s];
};
int main()
{
    hello<int,6>obj;
}
*/


class man
{
    int a,b;
public:
    man()
    {
        cout<<"Default constructor";
    }

    man(int a=10)
    {
        a=a;
        cout<<a;
    }

   /* man(int a=10,int b=20)
    {
        cout<<a<<b;
    } */
};
int main()
{
    man obj(5);
}
