#include<iostream>
#include<conio.h>
using namespace std;
class One
{
	string num;
	int a;
	int arr[4];
public:
	void Enter()
	{
	    int j=0;
		cout<<"Enter a string"<<endl;
		cin>>num;
		for(int i=0;i<num.length();i++)
		{
		    a = num[i];
			if(a < 65)
            {
                a-=48;
				cout<<a;
				arr[j]=a;
				j++;
            }
		}
		cout<<"    "<<endl;
		for(int z=0;z<4;z++)
        {
            cout<<arr[z]<<endl;
        }
	}
};
int main()
{
    One obj;
    obj.Enter();
    return 0;
}
