//overloading + operator


#include<iostream>
using namespace std;
class add
{
    int x,y;
public:
    add(){}//do nothing constructor
    add(int m, int n)
    {
        x=m;
        y=n;
    }
   friend add operator+ (add a1,add a2);
    /*
    {
        add a3;
        a3.x=x+a2.x;
        a3.y=y+a2.y;
        return(a3);
    }
    */
    void disp()
    {
        cout<<x<<endl<<y;
    }
};

add operator +(add a1, add a2)
{
    add a3;
        a3.x=a1.x+a2.x;
        a3.y=a1.y+a2.y;
        return(a3);
}

int main()
{
    add a1(10,10);
    add a2(20,20);
    add a3(0,0);
    a3=a1+a2;
    a3.disp();
}
