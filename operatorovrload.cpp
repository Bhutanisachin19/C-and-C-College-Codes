//compare string using class obj and operator overloading

#include<iostream>
#include<string.h>
using namespace std;

class str
{
    char str1[10];

public:
    void get()
    {
        cout<<"Enter a string \n";
        cin>>str1;
    }
    void disp()
    {
        cout<<"The string is : "<<str1<<"\n";
    }
    int operator < (str s2)
    {
        if((strcmpi(str1,s2.str1)) < 0)
            return(1);
        else
            return(0);
    }
    int operator > (str s2)
    {
        if((strcmpi(str1,s2.str1)) > 0)
            return(1);
        else
            return(0);
    }

     int operator = (str s2)
    {
        if((strcmpi(str1,s2.str1)) == 0)
            return(1);
        else
            return(0);
    }


};

int main()
{
    str s1,s2;
    s1.get();
    cout<<"Enter the string for 2nd object \n";
    s2.get();
    s1.disp();
    s2.disp();

    if(s1 < s2)
        cout<<"String 2 is greater";
    else if(s1 > s2)
        cout<<"String 1 is greater";
    else if(s1=s2)
        cout<<"Strings are equal";
    else
        cout<<"PLEASE ENTER CORRECT INPUT";

}
