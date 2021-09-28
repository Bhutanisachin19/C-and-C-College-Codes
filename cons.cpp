#include<iostream>
using namespace std;

class hell
{
    int a,b,c;
    void disp()
    {
        cout<<"values entered are "<<a<<"  "<<b;
    }
public:
     hell() // do nothing constructor
    { cout<<"constructor called \n";}

     void get()
        {
            cout<<"Enter two values \n";
            cin>>a>>b;
            disp();
        }

};
 int main()
 {
     hell obj;
     obj.get();

 }
