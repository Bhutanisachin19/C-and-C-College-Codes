#include<string.h>
int main()
{
    int e,n,i;
   char str1[50],str2[50];
   printf("Enter 1st string : \n");
   gets(str1);
   printf("Enter 2nd string : \n");
   gets(str2);

    printf("Press 1 to compare without string functions and press 2 for using function : \n");
    scanf("%d",&n);

    switch(n)
    {
        case 1 :
                for(i=0;str1[i]==str2[i] && str1[i]!='\0';i++);

                   if(str1[i] < str2[i])
                    {
                        printf("\n str2 is greater");
                    }
                    else if(str1[i] > str2[i])
                    {
                        printf("\n str1 is greater");
                    }
                    else
                    {
                        printf("\n str1 is Equal to str2");
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
}
