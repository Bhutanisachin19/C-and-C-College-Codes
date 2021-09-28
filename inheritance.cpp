
//inhertiance
#include<iostream>
using namespace std;
class first
{
    int a;
protected:
    int p;
    void hello()
    {
        cout<<"HELLO";
    }
public:
    int h;
    void get()
    {
        cout<<"Enter the values of a and p"<<endl;
        cin>>a>>p;
    }
    void put()
    {
        cout<<a<<endl<<p<<endl;
    }
};

class second : public first
{
public:
    int z;
    void pr()
    {
        get();
        put();
        hello(); //protect hello can be used here but cannot in main
    }
};
int main()
{
    second s;
    s.pr();
    // s.hello(); //will give error as it is protected
}
