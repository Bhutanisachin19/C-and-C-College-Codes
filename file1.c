#include<stdio.h>
int main()
{

    FILE *fp;
    char c;
    int i=1;
    //open a file
    fp=fopen("saiyan","w");
    while(i<=20)
    {
        scanf("%c",&c);
        putc(c,fp);
        i++;
    }
    fclose(fp);
    fp=fopen("saiyan","r");
    while(c=getc(fp)!= EOF)
    {
        printf("%c",c);

    }
    fclose(fp);
}
