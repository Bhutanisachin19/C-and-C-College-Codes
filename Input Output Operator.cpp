#include<iostream>
using namespace std;
#include<conio.h>
class Complex
{
      float real;
      float imag;
      public:
             Complex(){}
             Complex( int r)
             { real = r; }
             void read()
             {
                  cout<<"\nEnter real number : ";
                  cin>>real;
                  cout<<"\nEnter imaginary number : ";
                  cin>>imag;
             }
             void print()
             {
                  cout<<real;
                  cout<<endl<<imag;
             }
             friend Complex operator+( Complex c1, Complex c2);
             friend istream & operator>>( istream &In, Complex &C);
             friend ostream & operator<<( ostream &out, Complex &C);
};
Complex operator+( Complex c1, Complex c2)
{
       Complex c;
       c.real = c1.real + c2.real;
       c.imag = c1.imag + c2.imag;
       return(c);
}
istream & operator>>( istream &In, Complex &C)
{
        cout<<"\nEnter real part : ";
        In>>C.real;
        cout<<"\nEnter imaginary part : ";
        In>>C.imag;
        return(In);
}
ostream & operator<<( ostream &Out, Complex &C)
{
        Out<<C.real;
        Out<<endl<<C.imag;
        return(Out);
}
main()
{
      Complex c1, c2, c3;
      cin>>c1;
      cin>>c2;
      c3 = c1 + c2;
      cout<<c3;
getch();
}
