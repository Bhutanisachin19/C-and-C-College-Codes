/*      1
       111
      11111
     1111111   */

#include<stdio.h>
void main()
{
int i,j,k,s;

for(i=1;i<=4;i++)
{
	for(s=1;s<=4-i;s++)
		printf(" ");
	for(j=1;j<=i;j++)
		printf("1");
	for(k=1;k<=i-1;k++)
		printf("1");
 printf("\n");
}
}