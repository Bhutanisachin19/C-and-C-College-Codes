//object as function argument

#include<iostream>
using namespace std;

class sum_class
{
    int a,b;
public:
    void get()
    {
        cout<<"Enter two numbers \n";
        cin>>a>>b;
    }
    void sum(sum_class t1,sum_class t2)
    {

        a=t1.a+t2.a;
        b=t1.b+t2.b;
    }
    void disp()
    {
        cout<<a<<"\n"<<b;
    }
};

int main()
{
    sum_class t1,t2,t3;
    t1.get();
    t2.get();
    t2.sum(t1,t2);
    cout<<"The addition is \n";
    t2.disp();
}
