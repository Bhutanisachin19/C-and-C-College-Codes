/*
#include <iostream>
#include <iomanip>
#include <limits>
#include<string>
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
    cout<<s<<str <<endl;


    // The 's' variable above should be printed first.

    return 0;
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
         int num = n;
        int sum=n,temp=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i == 0)
            temp+=i;
        }
        cout<<temp<<endl;
        cout<<sum<<endl;
        sum = sum+temp;
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
