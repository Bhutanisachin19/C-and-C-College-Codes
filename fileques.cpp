
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream obj("Prac_file");
    int a;
    string word;
    char c;
    //cout<<"Enter an integer and an character "<<endl;
    //cin>>a>>c;
    obj<<"hello 10 words";
    obj.close();
// reading a file
    ifstream obj1("Prac_file");

while(obj1 >> word)
{
    cout<<word<<endl;
}

}

/*
// input output from class
class hell
{
    int a,b;
    float f;
    char c[30];
public:
    void get()
    {
        cout<<"Enter two integers"<<endl;
        cin>>a>>b;
        cout<<"Enter a float value"<<endl;
        cin>>f;
        cout<<"Enter a name:"<<endl;
        cin>>c;
    }
    void put()
    {
        cout<<a<<endl<<b<<endl<<f<<endl<<c<<endl;
    }
};
int main()
{
    hell h;
    h.get();
    ofstream objout("hell");
    objout.write((char *) &h,sizeof(h));
    objout.close();

    ifstream infile("hell");
    infile.read((char *) &h,sizeof(h));
    h.put();
}
*/
