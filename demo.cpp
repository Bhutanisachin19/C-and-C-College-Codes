#include<iostream>
using namespace std;

class A
{
public:
    virtual void disp()
    {
        cout<<"Parent";
    }
    void disp(int a)
    {
        cout<<"parameter disp of parent";
    }
};

class B : public A
{
public:
    void disp()
    {
        cout<<"Child";
    }
};
int main()
{
    A *obj = new B();
    obj->disp(10);
}
