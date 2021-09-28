#include<iostream>
using namespace std;


/*
class B; //forward declaration

class A
{
    int a;
public:
    void get()
    {
        cout<<"Enter value \n";
        cin>>a;
    }
    void disp()
    {
        cout<<a<<"\n";
    }
    friend void cal(A a1,B b1);
};
class B
{
    int a,b;
public:
    void get()
    {
        cout<<"Enter value \n";
        cin>>a;
    }
    void disp()
    {
        cout<<a<<"\n";
    }
    friend void cal(A a1,B b1);
};
void cal(A a1,B b1)
{
    int x;
    x=a1.a + b1.a;
          cout<<x;
}
int main()
{
    A a1;
    B b1;
    a1.get();
    b1.get();
    cout<<"Value of variable of class A is : ";
    a1.disp();
    cout<<"Value of variable of class B is : ";
    b1.disp();
    cout<<"Value after addition is : ";
    cal(a1,b1);

}
*/





//library
/*
class lib
{
    char book_name[50];
    char book_author[50];
    int price;
public:
    void get()
    {
        cout<< "\nEnter name of book \n";
        cin>>book_name;
        cout<<"Enter author of book \n";
        cin>>book_author;
        cout<<"Enter price \n";
        cin>>price;
    }
    void disp()
    {
        cout<<"\n"<<book_name<<"\n"<<book_author<<"\n"<<price;
    }
};

int main()
{
    int i;
    lib l1[3];

    for(i=0;i<3;i++)
    {
        l1[i].get();
    }


    for(i=0;i<3;i++)
    {

        cout<<" \nDetails of books are \n";
        l1[i].disp();

    }
}

*/


//ques 4 assignment 2
/*

class Book
{
    char name[50];
    int page,cost_cassette,code_cassette,duration,cost_book;
public:
    Book() //constructor
    {
        cost_book=0;
        cost_cassette=0;
    }

    void input()
    {
        cout<<"Enter name of the book \n";
        cin>>name;
        cout<<"Enter the no of pages \n";
        cin>>page;
        cout<<"Enter the cost of book \n";
        cin>>cost_book;
        cout<<"Enter the cost of cassette \n";
        cin>>cost_cassette;
        cout<<"Enter the code cassette \n";
        cin>>code_cassette;
        cout<<"Enter the duration \n";
        cin>>duration;
    }

    void disp()
    {

        cout<<"\n"<<"Name is : "<<name<<"\n";
        cout<<"Total number of pages are : "<<page<<"\n";
        cout<<"Cost of book is : "<<cost_book<<"\n";
        cout<<"Cost of cassette is : "<<cost_cassette<<"\n";
        cout<<"Code of cassette is : "<<code_cassette<<"\n";
        cout<<"Duration is : "<<duration<<"\n";
    }

        void displayCassette(int d)
    {
        if(duration==d)
        {
        cout<<"Display code and cost of Cassette : \n";
        cout<<"\nCode of Cassette : "<<code_cassette;
        cout<<"\nDuration of Cassette : "<<duration;
        }

    }

    ~Book()
    {
        cout<<"\nDestructor called.";
    }
};
int main()
{
    Book b1;
    b1.input();
    b1.disp();
    b1.displayCassette(10);
}
*/


//parameterize and copy constructor


class vegeta
{
    int a,b;
    float f;
public:
    void input()
    {
        cout<<"Enter value of A : \n";
        cin>>a;
        cout<<"Enter value of B : \n";
        cin>>b;
        cout<<"Enter value of F : \n";
        cin>>f;
    }

    void disp()
    {
        cout<<"Value of A is : "<<a<<"\n";
        cout<<"value of B is : "<<b<<"\n";
        cout<<"value of F is : "<<f<<"\n";
    }

    vegeta(){}// do nothing constructor

    vegeta(int x,int y, float z) //parameterized constructor
    {
        a=x;
        b=y;
        f=z;
    }

    vegeta(vegeta &z)
    {
        a=z.a;
        b=z.b;
        f=z.f;
    }
};


int main()
{
   //vegeta v = vegeta(1,2,3); //explicit calling
   //v.disp();

    vegeta s(10,45,800); //implicit calling
    s.disp();

    vegeta p(s);
    p.disp();

}







