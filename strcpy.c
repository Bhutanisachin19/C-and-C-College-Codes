#include<string.h>
int main()
{
    int a,i;
    char str[50],st[50];
    printf("Enter first string : ");
    gets(str);

    printf("Press 1 to use string function and 2 for not using function : \n ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
                strcpy(st,str);
                puts(st);
                break;
        case 2:
                for(i=0;str[i]!='\0';i++)
                {
                    st[i]=str[i];
                }
                    st[i] = '\0';

                printf("Second string  is %s",st);
                break;
    }
    return 0;

}
