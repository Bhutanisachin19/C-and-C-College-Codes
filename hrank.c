/*
#include<iostream.h>
#include<cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    cout<<"Enter a number";
    cin>>n;

    if(n<=9)
    {
        for(int i=n ; i<=9 ; i++)
        {
        cout<<i;
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

#include<iostream.h>


using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a;
    double b;
    string str;

    // Read and save an integer, double, and String to your variables.
    cout<<"Enter a integer , double and string ";
    cin>>a;
    cin>>b;
    cin>>str;
    cout<<endl;
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout<<i+a<<endl;
    // Print the sum of the double variables on a new line.
    double sum = d+b;
    cout<<sum<<endl;

    // Concatenate and print the String variables on a new line
    cout<< s+str <<endl;
    // The 's' variable above should be printed first.

    return 0;
}
