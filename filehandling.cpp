
// file handlimg
// input 10 characters in a file

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream outfile("c++file");
if((outfile.good())==0) // to check whether an error has occured or not
    cout<<"Unable to open file\n";
char c;
int i=1;
while (i<=10)
{
    cin>>c;
    outfile.put(c);
    i++;
}
outfile.close();

ifstream infile("c++file");

while(infile)
{
    infile.get(c);
    cout<<c;
}
infile.close();

}
