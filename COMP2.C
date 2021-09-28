#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   int e,n,i,a,b;
   char str1[50],str2[50];

   printf("Enter 1st string : ");
   gets(str1);
   printf("\nEnter 2nd string : ");
   gets(str2);
   a=strlen(str1);
    b=strlen(str2);
    printf("String 1 length = %d and string 2 length = %d ",a,b);
    printf("\nPress 1 to compare without string functions and press 2 for using function : \n");
    scanf("%d",&n);

    switch(n)
    {
	case 1 :
		i=0;
		while(str1[i]==str2[i] && str1[i]!='\0')
		i++;
		   if(str1[i] > str2[i])
		    {
			printf("\n String1 is greater");
		    }
		    else if(str1[i] < str2[i])
		    {
			printf("\n String2 is greater");
		    }
		    else
		    {
			printf("\n String 1 is Equal to String 2");
		    }
		break;
	case 2 :
		e=strcmp(str1,str2);
		if(e==0)
		    printf("STRINGS ARE EQUAL");
		else if(e==1)
		    printf("FIRST STRING IS GREATER");
		else
		    printf("SECOND STRING IS GREATER");
		break;

    }
    return 0;
    getch();
}
