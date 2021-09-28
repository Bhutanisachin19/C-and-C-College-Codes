#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,k,l,c=65,d,b=-1;
for(i=0;i<3;i++)
{
for(j=0;j<=2-i;j++)
{
d=c+j;
printf("%c",d);
}
if(i>0)
{
for(k=1;k<=b;k++)
printf(" ");
}
b+=2;
for(l=j;l>0;l--)
{
if(l!=3)
printf("%c",c+l-1);
}
printf("\n");
}
for(i=1;i<3;i++)
{
for(j=0;j<=i;j++)
printf("%c",c+j);
if(i==1)
printf(" ");
for(k=1;k>=0;k--)
printf("%c",c+k);
printf("\n");
}
return 0;
}
