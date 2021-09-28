#include<iostream>
using namespace std;

class Default
{
public:

     def1(int a=30,int b=20,int c=10)
    {
        cout<<a<<" "<<b<<" "<<c;
    }

     def1(float f)
    {
        cout<<f<<endl;
        cout<<"Without default arguments";
        //cout<<a<<" "<<b<<" "<<c;
    }

};

int main()
{
    Default obj;
    float a = 1.5;
    obj.def1();
}
