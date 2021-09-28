
// this pointer

#include<iostream>
using namespace std;



class base
{
    int a;
public:
    void get()
    {
        cout<<"Enter a value for base class \n";
        cin>>a;
    }
};

class der : public base
{
    int b;
public:
    void get()
    {
        cout<<"Enter a value for derived class \n";
        cin>>b;
    }
};

int main()
{
    base *bptr; // creating pointer of base class
    base b;

    der *dptr; //creating pointer of derived class
    der d;

    bptr =&b;
    bptr->get(); //calls base class function

    dptr =&d;
    dptr->get();
}
