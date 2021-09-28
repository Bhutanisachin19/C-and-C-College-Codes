
#include<iostream>
#include<cstdio>
using namespace std;

/*
int main() {
    // Complete the code.
    int n;
    cout<<"Enter a number ";
    cin>>n;

    if(n<=9)
    {
        for(int i=n ; i<=9 ; i++)
        {
        cout<<i<<endl;
        }
    }
    else
    {
        if(n % 2 == 0)
        cout<<"even";
        else
        cout<<"odd";
    }

    return 0;
}
*/


class Student
{
     int age,n;
     char name [50];
     char sname [50];
public:
    void get()
    {
        cin>>age;
        cin>>name;
        cin>>sname;
        cin>>n;
    }

    void put()
    {
        cout<<age<<endl;
        cout<<sname<<","<<name<<endl;
        cout<<n<<endl;

        cout<<age<<","<<name<<","<<sname<<","<<n;
    }
};

int main() {
     Student obj;
     obj.get();
     obj.put();
    return 0;
}

