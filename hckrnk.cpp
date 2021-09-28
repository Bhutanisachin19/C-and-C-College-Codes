#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book()
        {
            cout<<"Default of book"<<endl;
        }
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
class MyBook : public Book
{
   public:
   string title,author;
   int price;

    MyBook()
    {
        cout<<"Default constructor"<<endl;
    }

    MyBook(string t,string a,int p)
    {
        title =t;
        author =a;
        price =p;
    }
    void display()
    {
        cout<<"Title :"<<title;
        cout<<"Author :"<<author;
        cout<<"Price :"<<price;
    }
};
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

