#include<iostream>
using namespace std;

template<class T>
class Temp
{
public:
    T a;
    void Get(T a)
    {
        cout<<"You Entered "<<a<<endl;
    }
};

int main()
{
    Temp<int> obj;
    obj.Get(10);

    Temp<char> ch;
    ch.Get('A');
}
