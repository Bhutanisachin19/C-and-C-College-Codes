struct student
{

    char name[50];
    int rno;
    float marks[4];
}st;
int main()
{
    int i;
    printf("Enter the name and roll no of the student \n");

    scanf("%s%d",st.name,&st.rno);

    printf("Enter marks of all 4 subjects");

    for(i=0;i<4;i++)
    {
        scanf("%f" ,&st.marks[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%f \n",st.marks[i]);
    }
    printf("name and roll no are : \n %s \n %d",st.name,st.rno);
    return 0;
}
