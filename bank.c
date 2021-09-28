#include<iostream>
using namespace std;

class bank
{
    int acc,bal;
    char name[10];
public:

    void get()
    {
        cout<<"Enter name \n";
        cin>>name;

        cout<<"Enter account number \n";
        cin>>acc;

        cout<<"Enter Balance";
        cin>>bal;
    }

    void deposit()
    {
        int bal1;
        cout<<"Deposited amout";
        cin>>bal1;
        bal=bal+bal1;
    }

    void withdraw()
    {
        int am;
        cout<<"Enter amount to be withdrawn";
        cin>>am;

        if(bal<am)
        cout<<"Not enough Balance";
        else
            bal=bal-am;
    }

    void disp()
    {
        cout<<name;
        cout<<"New balance is %d"<<bal;
    }
};

int main()
{
    bank b;
    b.get();
    b.deposit();
    b.withdraw();
    b.disp();
}
