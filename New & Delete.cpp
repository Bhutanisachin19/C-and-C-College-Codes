#include<iostream>
using namespace std;
#include<conio.h>
class Vector
{
      int *array;
      public:
             void *operator new(size_t size)
             {
                  Vector *my_vector;
                  my_vector = ::new Vector;
                  my_vector->array = new int[10];
                  return my_vector;
             }
             void operator delete( void *vec)
             {
                  Vector *my_vect;
                  my_vect = (Vector*)vec;
                  delete(int*) my_vect->array;
                  ::delete vec;
             }
             void read()
             {
                  for( int i = 0; i< 10; i++)
                  {
                       cout<<"Enter element "<<i+1<<" of Array : ";
                       cin>>array[i];
                  }
             }
             int sum()
             {
                 int sum = 0;
                 for( int i = 0; i < 10; i++)
                      sum = sum + array[i];
                 return(sum);
             }
};
main()
{
      Vector *my_vector = new Vector;
      cout<<"\nEnter Data : ";
      my_vector->read();
      cout<<"\nSum = "<<my_vector->sum();
      delete my_vector;
getch();
}
