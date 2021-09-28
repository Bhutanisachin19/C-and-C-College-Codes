
//static function
#include<iostream>
using namespace std;

class fun
{
    int a;
    static int b;
public:
    void get()
    {
        cout<<"Enter values of a and b \n";
        cin>>a>>b;
    }
   //  static void func(); //prototype

    static void func()
    {
        b++;
        cout<<"value are \n"<<b<<endl;
    }
    void st()
    {
        b=b*10;
        cout<<"static var in normal function "<<b<<endl;
    }

};

int fun :: b;
/*
 void fun :: func()
{
        b++;
        cout<<"value are \n"<<b;
}
*/
int main()
{
    fun f;
    f.get();
    fun :: func(); //calling static function
    f.st();
}
