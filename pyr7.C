//   PATTERN
//                     1
//		    1  1  1
//               1  1  1  1  1
//           1   1  1  1  1  1  1
//        1  1   1  1  1  1  1  1  1

#include <stdio.h>
#include <conio.h>
int main()
{
   int i,j,k,n=1;
  // clrscr();
   for(i=1;i<=5;i++)
   {
     printf("\n");
     for(k=i;k<=4;k++)
     {
	printf(" ");
     }
     for(j=1;j<=i;j++)
     {
	printf("%d",n);
     }
     for(j=1;j<=i-1;j++)
     {
	  printf("%d",n);
     }
    }

getch();
}
