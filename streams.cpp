/* #include<istream>
#include<ostream>
#include<iostream>
using namespace std;

int main()
{
    istream is1;
    ostream os1;
    char c;

    int i;
    for(i=0;i<=5;i++)
    {
        is1.get(c);
        os1.put(c);
    }
}
*/




/*
#include<iostream>
using namespace std;

int main()
{
    iostream os1;
    char c;
    os1.get(c);
    os1.put(c);
}
*/




/*
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character : \n";
    cin.get(c); // use cin>>c;
    while (c!='\n')
    {
        cout<<c;
        cin.get(c); // use cin>>c;
    }
}
*/


/*
//prints ascii values
#include<iostream>
using namespace std;

int main()
{
    char c;
    for(int i=0;i<255;i++)
    {
        if(i==26)
            continue;
        cout<<i<< " ";
        cout.put(i); // use cout<<i;
        cout<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    char c[40];
    cout<<"Enter a string : ";
    cin>>c;
    cout<<"Entered string is : ";
    cout<<c;
}
*/

