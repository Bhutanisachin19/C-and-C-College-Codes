    #include<iostream>
    using namespace std;


/*
    class A
    {
        int a,b;
    public:
        A()
        {
            a=10;
            b=20;
        }
        void operator ++(int)
        {
            a++;
            b++;

        }
        void operator ++()
        {
            ++a;
            ++b;
        }
        void disp()
        {
            cout<<"\n"<<a<<"\n"<<b;
        }
    };
    int main()
    {
        A i;
        cout<<"Initial values \n";
        i.disp();
        cout<<"\n"<<"Post increment \n";
        i++;
        i.disp();
        cout<<"\n"<<"Pre increment \n";
        ++i;
        i.disp();
    }

    /*


    //add sub mul div using overloading

    class arth
    {
        int x,y;
    public:
        arth (int m,int n)
        {
            x=m;
            y=n;
        }

        arth(){} // do nothing constructor

        arth operator +(arth a2)
        {
            arth a3;
            a3.x = x + a2.x;
            a3.y = y + a2.y;
            return(a3);
        }

        arth operator -(arth a2)
        {
            arth a3;
            a3.x = x - a2.x;
            a3.y = y - a2.y;
            return(a3);
        }

        arth operator *(arth a2)
        {
            arth a3;
            a3.x = x * a2.x;
            a3.y = y * a2.y;
            return(a3);
        }

        arth operator /(arth a2)
        {
            arth a3;
            a3.x = x / a2.x;
            a3.y = y / a2.y;
            return(a3);4.	Overload operators using friend (>>, <<).
        }
        void disp()
        {
            cout<<x<<"\n"<<y<<"\n";
        }
    };

    int main()
    {
        arth a1(100,100);
        arth a2(20,20);
        arth a3(0,0);
        cout<<"Addition is : \n";
        a3= a1 + a2;
        a3.disp();
        cout<<"Subtraction is : \n";
        a3= a1 - a2;
        a3.disp();
        cout<<"Multiplication is : \n";
        a3= a1 * a2;
        a3.disp();
        cout<<"Division is : \n";
        a3= a1 / a2;
        a3.disp();
    }

    */


    //overload += and -=

    class opr
    {
        int a;
    public:
        void get()
        {
            cout<<"Enter a number : \n";
            cin>>a;
        }
        void disp()
        {
            cout<<"\nValue is :"<<a;
        }
        void operator +=(opr o2)
        {
            a+=o2.a;
            cout<<a;
        }
       /* void operator -=(opr o2)
        {
            a-=o2.a;
            cout<<a;
        }*/
    };
    int main()
    {
        opr o1,o2;
        //o1.get();
        o2.get();
        //o1.disp();
        o2.disp();
        cout<<"\n"<<"addition is ";
        o2+= o2;
        //cout<<"\n"<<"subtraction is ";
        //o1 -= o2;

    }

