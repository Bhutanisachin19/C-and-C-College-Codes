// accesiing private member function using virtual keyword

#include<iostream>
using namespace std;

class first
{
    public:
   virtual  void password()
    {
        cout<<"Password base"<<endl;
    }
    void hello()
    {
        cout<<"Hello";
    }
};
class second : public first
{
    string pass;
    void password()
    {
        cout<<"Password derived"<<endl;
    }
};
int main()
{
    second s;
    first *ptr;
    ptr=&s;
    ptr->password();
    //s.first::password();
}
