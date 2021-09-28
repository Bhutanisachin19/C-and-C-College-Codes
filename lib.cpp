#include<iostream>
using namespace std;

class books
{
    char author[20];
    char title[20];
    float price;
    char publisher[20];
public:

    void input()
    {
        cout<<"Enter author name \n";
        cin>>author;
        cout<<"Enter title \n";
        cin>>title;
        cout<<"Enter price \n";
        cin>>price;
        cout<<"Enter publisher \n";
        cin>>publisher;
    }
    void disp()
    {
        cout<<"Values Entered are \n";
        cout<<author<<"\n"<<title<<"\n"<<price<<"\n"<<publisher<<"\n";
    }
};
int main()
{
    books b;
    b.input();
    b.disp();
}
