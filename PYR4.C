/*  5
   545
  54345
   545
    5   */

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,s,r=5;
int r1=r/2+1;
int r2=r/2;
//clrscr();
printf("\n \n");

for(i=r;i>=r1;i--)
{
	for(s=1;s<=i-r1;s++)
		printf(" ");
	for(j=r;j>=i;j--)
		printf("%d",j);
    for(k=i-1;k<=r;k++)
		printf("%d",k);
		
	printf("\n");
}
for(i=r;i>r1;i--)
{
	for(s=i;s<=r;s++)
		printf(" ");
	for(j=r,k=1;k<=i-r1;k++,j--)
		printf("%d",j);
	for(k=j+2;k<=r;k++)
		printf("%d",k);
	printf("\n");
}
getch();
}

