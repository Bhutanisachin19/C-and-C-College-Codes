// stack on linked list
#define NULL 0
struct student
{
    int rno,m;
    struct student *ptr;
};
struct student *start;

void insert()
{
    struct student *temp;
    temp = (struct student *)malloc(sizeof(struct student));
    printf("Enter roll no and marks \n");
    scanf("%d %d", &temp->rno,&temp->m);
    temp-> ptr =NULL;
    if(start ==NULL)
        start =temp;
    else
    {
        temp->ptr=start;
        start=temp;
    }
}
void del()
{
    struct student *temp;
    if(start==NULL)
        printf("EMPTY \n");
    else
    {
        temp=start;
        start=start->ptr;
        free(temp);
    }
}
void disp()
{
    struct student* temp;


    if (start == NULL) {
        printf("\nStack Underflow");
        exit(1);
    }
    else {
        temp = start;
        while (temp != NULL) {


            printf("%d->", temp->rno);
            printf("%d", temp->m);
            printf("\n");
            temp = temp->ptr;
        }
    }
}
int main()
{
    start=NULL;
       int ch=0;
    while(ch<4)
    {
        printf("Choose from the following! \n 1.Insert \n 2.Delete \n 3.Display \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert();break;
            case 2:del();break;
            case 3:disp();break;
        }
    }
}
