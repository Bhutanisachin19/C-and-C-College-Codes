// input 10 intergers
/*

#include<fstream>
#include<iostream>
using namespace std;
int main()
{

ofstream outfile("cppfile");
if((outfile.good())==0) // to check whether an error has occured or not
    cout<<"Unable to open file\n";

int c;
int i=1;
cout<<"Enter 10 numbers :"<<endl;
while (i<=10)
{
    cin>>c;
    outfile<<c<<"\n";
    i++;
}
outfile.close();

ifstream infile("cppfile");
i=1;
while(i<=10)
{
    infile>>c;
    cout<<c;
    i++;
}
infile.close();
}

*/

//store text
/*

#include<fstream>
#include<iostream>
using namespace std;
int main()
{

ofstream outfile("cpfile");
if((outfile.good())==0) // to check whether an error has occured or not
    cout<<"Unable to open file\n";

char c[10];
int i=1;
cout<<"Enter 5 names :"<<endl;
while (i<=5)
{
    cin>>c;
    outfile<<c<<"\n";
    i++;
}
outfile.close();

ifstream infile("cpfile");
i=1;
cout<<"Names you entered are :"<<endl;
while(i<=5)
{
    infile>>c;
    cout<<c<<endl;
    i++;
}
infile.close();
}

*/

 //display from a existing file
/*
 #include<fstream>
 #include<iostream>
 using namespace std;

 int main()
 {
     char c;
     ifstream obj;

     obj.open("student");

     while(obj)
     {
         obj.getline(c);
         cout<<c;
     }
 }

*/


/*
#include<iostream>
#include<fstream>
using namespace std;

class bill
{
    int bill_no,bill_amount;
public:
    void get()
    {
        cout<<"Enter bill number and bill amount :"<<endl;
        cin>>bill_no>>bill_amount;
    }
    void put()
    {
        cout<<bill_no<<endl<<bill_amount;
    }
};
int main()
{
    bill bb[5];
    int i;

    ofstream outfile("hell");
     for(i=0;i<=4;i++)
    {
     outfile.write((char *) &bb[i],sizeof(bb[i]));
     bb[i].get();
    }
    outfile.close();

    ifstream infile("hell");

    for(i=0;i<=4;i++)
    {
      infile.read((char *) &bb[i],sizeof(bb[i]));
    bb[i].put();
    }
    infile.close();

}
*/

//template
/*
#include<iostream>
using namespace std;

template < class tp >

void maxm(tp a,tp b)
{
        if(a>b)
            cout<<"A is greater "<<endl;
        else
            cout<<"B is greater "<<endl;
}
int main()
{
        int a, b;
        cout<<"Enter a and b "<<endl;
        cin>>a>>b;
        maxm(a,b);
        float x,y;
        cout<<"Enter x and y "<<endl;
        cin>>x>>y;
        maxm(x,y);
}
*/
//overload template function
/*
#include<iostream>
using namespace std;
template < class T >

void disp(T a)
{
    cout<<endl<<"Template function "<<endl<<a;
}
void disp(int a)
{
    cout<<endl<<"Function without template "<<endl<<a;
}
int main()
{
    disp(10);//integer value
    disp(19.9);//float value
}

*/

//sort array using template


#include<iostream>
using namespace std;
template < class T >

void sort_arr(T arr[])
{
    int i,j;
        T a;
    for (i = 0; i < 5; ++i)
        {
            for (j = i + 1; j < 5; ++j)
            {
                if (arr[i] > arr[j])
                {
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    cout<<"Sorted array is :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={9,3,10,0,8};
    sort_arr(arr);
   float arrf[]={1.5,5.9,55,40.1,1.1};
   sort_arr(arrf);
}


//exception handling
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of A and B : "<<endl;
    cin>>a>>b;
    int x=a-b;

    try
    {
        if(x!=0)
            cout<<"Result (a/x) ="<<a/x<<endl;
        else
            throw(x);
    }
    catch(int i)
    {
        cout<<"Exception caught";
    }
}
*/






