

int main()
{
struct student
    {
        int rno;
        char name[50];
        float marks;
    };

    struct student st1={1,"Aman",55};
    struct student st2={7,"Akshay",66};
    struct student st3={15,"Sahil",89};
    printf("Roll no , name and marks are : %d \n %s \n %f " , st1.rno, st1.name,st1.marks);
    return 0;
}
