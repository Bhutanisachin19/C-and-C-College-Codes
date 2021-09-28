/*
#include<iostream>
using namespace std;

class vegeta
{
    int a,b;
public:
    vegeta()
    {
        a=0;
    }
    void input()
    {
        cout<<"Enter values of A and B \n";
        cin>>b;
    }
    void disp()
    {
        cout<<"Value of A is : "<<a<<"\n";
        cout<<"Value of B is : "<<b;
    }
};

int main()
{
    vegeta v1;
    v1.input();
    v1.disp();
}

//default avlue given by constructor will be overwritten
*/

/*
#include<iostream>
using namespace std;
int fun(int x = 0, int y = 0, int z)
{ return (x + y + z); }
int main()
{
cout<< fun(10);
return 0;
}
*/

/*
#include <iostream>
using namespace std;
#define MAX 10
int main()
{
int num;
num = ++MAX;
cout<< num;
return 0;
}

*/

#include <iostream>
using namespace std;
/*
void fun(int x, int y)
{
x = 20;
y = 10;
}
int main()
{
int x = 10;
fun(x, x);
cout<< x;
return 0;
}
*/
