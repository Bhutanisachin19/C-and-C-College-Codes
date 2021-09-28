#include<iostream>
#include<conio.h>
using namespace std;
void fun(string ,string );
int main()
{
    string str, str1;
    fun("abcd","xyz"); //error if not in double quotes

}
void fun(string s,string a)
{
    cout<<s<<endl<<a;
}
