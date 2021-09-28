
/*
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{

    //taking input of string and concate it
// when we use cin for input with strings it only takes words before space as a string


    string str1,str2;

    cout<<"Enter string 1";
    //cin>>str1;
     getline (cin, str1);


    cout<<"Enter string 2";
    //cin>>str2;
     getline (cin, str2);

     cout<<"String entered is "<<endl;
    cout<<endl<<str1<<endl<<str2<<endl;

    cout<<"concate of strings is"<<endl<<str1 + str2;
}

*/

//string hackerrank code copy odd in one and even in another
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string str,str1,str2;

    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>str;

    for(int i=0;i<str.length();i++)
    {

        if(i==0 || i%2==0)
        {
            str1=str1+ str[i];
        }
        else
        str2=str2+str[i];
    }
    cout<<str1<<" "<<str2;
    cout<<endl;
    str1.clear();
    str2.clear();
    }

    return 0;
}
