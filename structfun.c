#include<stdio.h>
struct student
{
    int rno;
    float marks;
    char name[10];

}st;
void disp(st);
main()
{
    printf("enter the details rollno marks and name");
    scanf("%d %f %s", &st.rno,&st.marks,st.name);
    disp(st);
    }
 void disp(struct student st)
{
    printf("HELLO");
    printf("%d %f %s",st.rno,st.marks,st.name);
}
