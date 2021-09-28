//inheritance 1st program
#include<iostream>
using namespace std;
class base
{
    int pr;
protected:
    int pt;

public:
    int pb;
    void get()
    {
        cout<<"Enter values of base class: \n";
        cin>>pr>>pt>>pb;
    }
    void disp()
    {
        cout<<"Values are : \n";
        cout<<pr<<endl<<pt<<endl<<pb<<endl;
    }
};

//using private visibility
/*
class der : private base
{
    int s;
public:
    void get_der()
    {
        cout<<"Enter value of s : \n";
        cin>>s;
        get();//base class function
        disp();
    }
};
int main()
{
    der d1;
    //d1.get(); it is a private member hence it cannot be accessed directly
    d1.get_der();

}
*/

// using public visibility
/*
class der : public base
{
    int s;
public:
    void get_der()
    {
        cout<<"Enter value of s : \n";
        cin>>s;
    }
};
int main()
{
    der d1;
    d1.get(); // we can access the base class fncn bcoz we have public visibility
    d1.disp();
}
*/
// using protected visibility
class der : protected base
{
    int s;
public:
    void get_der()
    {
        cout<<"Enter value of s : \n";
        cin>>s;
    }
};
int main()
{
    der d1;
    d1.get_der();
}
