//overriding is effected by return type??
// no


#include<iostream>
using namespace std;

class one
{
public:
    void hello()
    {
        cout<<"hello from one";
    }
};


class two : public one
{
public:
    int hello()
    {
        cout<<"hello from two";
        return 0;
    }
};

int main()
{
    two obj;
    obj.hello();
    //return 0;
}

