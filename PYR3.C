
/*  1234321
    123 321
    12   21
    1     1  */

#include<stdio.h>
int main()
{
int i,j,k,r1=0,r=4;
int s=1;
//clrscr();

for(i=r;i>=1;i--,r1+=2)
{
	for(s=1;s<=i;s++)
		printf("%d",s);

		if(i==r-1)
		   r1=1;
		for(k=1;k<=r1;k++)
			printf(" ");
		if(i==r)
		j=i-1;
		else
		j=i;

		for(;j>=1;j--)
		printf("%d",j);


	printf("\n");
}
//getch();
}
