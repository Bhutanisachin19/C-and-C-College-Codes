#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


/*
int main()
{

    string str,str1,str2;

    cout<<"Enter a string ";
    getline(cin,str);

    int a = str.length();
    cout<<a<<endl;


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

}

*/




int main()
{
    int binary[32];
    int n;
    cin >> n;

    int i=0;
    while(n>0)
    {
         binary[i] = n % 2;
        n = n / 2;
        i++;
    }

     for (int j = i - 1; j >= 0; j--)
        cout << binary[j];

        int l=binary.length;

        /*
    for(int ar=0;ar<=;ar++)
    {
        int flag=0;

        if(binary[ar]==binary[ar+1])
        flag++;

        cout<<flag;
    }
*/
    return 0;
}

