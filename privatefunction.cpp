#include<iostream>
using namespace std;
class hello
{
    int a;
public:

    void hell()
    {
        cout<<" base Function called"<<endl;
    }
};
class der : private hello
{
public:
    void fun()
    {
        cout<<"Der function"<<endl;
        hell(); // calling private function
    }
};
int main()
{
    der d1;
    d1.fun();

}
