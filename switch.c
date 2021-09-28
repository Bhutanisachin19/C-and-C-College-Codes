
#include <stdio.h>
#include<conio.h>
int main()
{
   char x = 'a';



   printf("Enter a char");
   scanf("%c",&x);

   switch (x)
   {

       default: printf("Choice other than 1, 2 and 3");
                break;
       case 'a': printf("Choice is 1");
               break;
       case 'b': printf("Choice is 2");
                break;
       case 'c': printf("Choice is 3");
               break;
   }
   return 0;
}
