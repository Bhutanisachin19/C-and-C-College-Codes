#include<iostream>
using namespace std;
/*
  class sum
  {
  int a,b,total;
  public:
  sum(int a=10,int b=5)
  {
      a=a;
      b=b;
  total=a+b;
  cout<<total<<endl;
  }
   sum(int r=2)
  {
  int r_no;
  r_no=r;
  cout<<r_no<<endl;
  }

  };
  int main()
  {
  sum d();
  //sum d1(3);
  }
*/

class Fun
{
    int a,b,c;
public:

    Fun(int a=10, int b=20,int c=30)
    {
        cout<<"DEFAULT CALLED";
    }
/*
   Fun()
    {
        cout<<"DO NOTHING";
    }
*/
    Fun(int a,int b)
    {

        cout<<"PARAMETRIZED CALLED";
    }
};
int main()
{
     Fun obj;

}














