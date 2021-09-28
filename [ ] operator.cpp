#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
typedef struct AccountEntry
{
        int no;
        char name[25];
} AccountEntry;

class AccountBook
{
      int account;
      AccountEntry acc[10];
      public:
             AccountBook(int accountIn)
             {
                             account  = accountIn;
             }
             void AccountGet()
             {
                  for( int i = 0; i < account; i++)
                  {
                       cout<<"\nEnter account number : ";
                       cin>>acc[i].no;
                       cout<<"\nEnter name of holder : ";
                       cin>>acc[i].name;
                  }
             }
             int operator[]( char *nameIn)
             {
                 for( int i = 0; i < account; i++)
                 {
                      if( strcmp(nameIn, acc[i].name) == 0)
                          return(acc[i].no);
                 }
             }
             char *operator[]( int noIn)
             {
                  for( int i = 0; i < account; i++)
                  {
                       if( noIn == acc[i].no)
                           return(acc[i].name);
                  }
             }
};
main()
{
      int accno;
      char name[25];
      AccountBook accounts(3);
      cout<<"\nEnter Data : ";
      accounts.AccountGet();
      cout<<"\nEnter account number to access name : ";
      cin>>accno;
      cout<<"\nName : "<<accounts[accno];
      cout<<"\nEnter name to access account number : ";
      cin>>name;
      cout<<"\nAccount No : "<<accounts[name];
getch();
}
