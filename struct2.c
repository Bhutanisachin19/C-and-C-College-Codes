struct student
{

    char name[50];
    int rno;
    float marks;
};
int main()
{
struct student s1;
struct student s2;
printf("Enter the name,roll no and marks of the first student \n");
scanf("%s%d%f",s1.name,&s1.rno,&s1.marks);
printf("Enter the name,roll no and marks of the second student\n");
scanf("%s%d%f",s2.name,&s2.rno,&s2.marks);
   printf("info of student 1 is : %s \n %d \n %f", s1.name,s1.rno,s1.marks);
   printf("info of student 2 is : %s \n %d \n %f", s2.name,s2.rno,s2.marks);
    return 0;
}
