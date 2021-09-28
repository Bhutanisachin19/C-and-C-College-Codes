
#include<iostream>
using namespace std;


/*int  main()
{
    cout<<"hello c++";
    return  0;
}
*/


//refrence variable

/*int main()
{
    int a=5;
    cout<<"value of a is  " <<a <<"\n";
    int &ref=a;
    ref++;
    cout<<"value of ref is "<<ref;
}
*/

//print greater number using return by refrence
/*
int &lar(int &c, int &d);
int main()
{
    int a,b;
    cout<<"Enter 1st no \n";
    cin>>a;
    cout<<"Enter 2nd number \n";
    cin>>b;
    int &ans=lar(a,b);
    cout<<"GREATER NUMBER IS \n"<<ans;
}

int &lar(int &c,int &d)
{
       if(c>d)
            return(c);
       else
        return(d);
}

*/


//default argument
/*
void mul(int a=20, int b=50)
{
    cout<<a*b;
}
int main()
{
    cout<<"without argumrnts \n";
    mul();

    cout<<" \n with arguments \n";
    mul(5,9);

}
*/


//inline function


/*
inline int sq(int a)
{
    return(a*a);
}

int main()
{
    cout<<sq(19);
    return 0;
}
*/

//4th

/*
inline void check(char a)
{
    if(isalpha(a)==0)
        cout<<"it is a number";
    else
        cout<<"it is an alphabet";
}
int main()
{
    char a;
    cout<<"enter a value \n";
    cin>>a;
    check(a);
}
*/

// check div or prime
/*
void check(int a, int b=-1)
{
    int flag=0;
    if(b==-1)
    {
        for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            flag=1;
    }

    if(flag==0)
        cout<<"prime";
    else
        cout<<" not prime";
    }
    else
    {
        if(a%b==0)
        cout<<"Number is divisble";
        else
        cout<<"not divisible";
    }
}
int main()
{
   int a,b,ch;
 cout<<"1.Check Number is prime or not\n2.Check Number is divisible or not\nEnter your choice : ";
 cin>>ch;
 switch(ch)
{
case 1:
    cout<<"Enter a number : ";
    cin>>a;
    check(a);
    break;
case 2:
    cout<<"Enter 2 number : ";
    cin>>a>>b;
    check(a,b);
    break;

}
}
*/

//matrix
/*
void sub(int a[2][2],int b[2][2])
{
    int c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j] - b[i][j];
        }
    }
    cout<<" Subtraction in integer: \n\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
}

void sub(float a[2][2],float b[2][2])
{
    int i,j;
    float c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j] - b[i][j];
        }
    }
    cout<<"Subtraction in float : \n\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
}
void sub(double a[2][2],double b[2][2])
{
    int i,j;
    double c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j] - b[i][j];
        }
    }
    cout<<"Subtraction in double : \n\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
int main()
{ int a[2][2]={{19,8},{6,4}},b[2][2]={{9,8},{3,4}};
  float d[2][2]={{9.2,9.2},{7.2,3.2}},e[2][2]={{6.1,4.1},{3.1,2.1}};
  double g[2][2]={{9.2,4.2},{5.2,8.2}},h[2][2]={{1.1,3.1},{4.1,5.1}};
  sub(a,b);
  sub(d,e);
  sub(g,h);
    return 0;
}
*/


//power
/*

void pow(double m, int n=2)
{
    int res=1;
    if(n==2)
    {
        cout<<"square is \n";
        cout<<m*m;
    }
    else
    {
        for(int i=1;i<=n;i++)
    {
        res=res*m;
    }
    cout<<m <<"  to the power "<<n<< " is "<< res;
    }
}
int main()
{
        int ch=0,i,m,n;
    cout<<"Menu\n1.Power\n2.Square of Number\n";
    cout<<"Enter your choice : ";
    cin>>ch;
  if(ch==1)
        {
        cout<<"\nEnter the Number and its power : ";
        cin>>m>>n;
        pow(m,n);
        }
   else if(ch==2)
       {
        cout<<"\nEnter the Number : ";
        cin>>m;
        pow(m);
       }
       else
        cout<<"Wrong choice";
}

*/





