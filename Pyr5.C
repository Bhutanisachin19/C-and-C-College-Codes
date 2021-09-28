//   PATTERN
//              1 2 3 4 5 4 3 2 1
//		1 2 3 4   4 3 2 1
//              1 2 3       3 2 1
//              1 2           2 1
//              1               1

#include <stdio.h>
#include <conio.h>
int main()
{
   int i,j,k;
  // clrscr();
   for(i=1;i<=5;i++)
   {
     printf("\n");
     for(j=1;j<=6-i;j++)
     {
	printf("%d",j);
     }
     for(k=1;k<=((2*i)-3);k++)
     {
	printf(" ");

     }
     for(j=6-i;j>=1;j--)
     {
	  if(!(j==6-i&&i==1))
	  {
	    printf("%d",j);
	  }
     }



   }

getch();
}
