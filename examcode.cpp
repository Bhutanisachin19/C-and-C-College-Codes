#include<iostream>
using namespace std;
/*
class base
{
    int arr[10];
};
class b1:virtual public base{};
class b2:virtual public base{};
class derived :public b1, public b2{};
int main()
{
    cout<<sizeof(derived);
}
*/

/*
class p
{
public:
    void print()
    {
        cout<<"Inside p";
    }
};

class q:public p
{
public:
    void print()
    {
        cout<<"Inside q";
    }
};

class r:public q
{
};
int main()
{
    r obj;
    obj.print();
}
*/

class a
{
      virtual void fun(){};
};
class b: virtual public a
{
    virtual void hell()
    {

    }
};
int main()
{
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b);
}
