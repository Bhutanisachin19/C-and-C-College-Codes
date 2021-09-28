//return using object

#include<iostream>
using namespace std;

class sum
{
    int a;
    int b;
public:
    void get()
    {
        cin>>a>>b;
    }

    sum add(sum s1, sum s2)
    {
       sum s3;
       s3.a=s1.a + s2.a;
       s3.b=s1.b + s2.b;
       return(s3);
    }
    void disp()
    {
        cout<<a<<"\n"<<b;
    }
};

int main()
{
    sum s1,s2,s3,s4;
    s1.get();
    s2.get();

    s2=s3.add(s1,s2);
    s2.disp();
}
