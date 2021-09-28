#include<iostream>
using namespace std;

class student
{
    int r_no;
    char name[20];
public:
    void get_std()
    {
        cout<<"Enter name and roll number : \n";
        cin>>name>>r_no;
    }
    void disp_std()
    {
        cout<<"Name is : "<<name<<endl;
        cout<<"Roll number is : "<<r_no<<endl;
    }
};

class exam : public student
{
protected:
    int m1,m2,m3;
public:
    void get_exam()
    {
        cout<<"Enter marks of 3 subjects :"<<endl;
        cin>>m1>>m2>>m3;
    }
    void disp_exam()
    {
        cout<<"Marks are : "<<endl;
        cout<<m1<<endl<<m2<<endl<<m3<<endl;
    }
};
class result : public exam
{
    int total, avg;
public :
    void res()
    {
        total=m1+m2+m3;
        avg=total/3;
        cout<<"Average is : \n"<<avg;
    }
};
int main()
{
       result r1;
       r1.get_std();
       r1.disp_std();
       r1.get_exam();
       r1.disp_exam();
       r1.res();
}
