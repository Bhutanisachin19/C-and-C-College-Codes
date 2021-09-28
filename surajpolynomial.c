#include<stdio.h>
#include<stdlib.h>

struct emp
{
int coeff,pow;
struct emp *ptr;
};
struct emp *k,*p,*s,*front1=NULL,*rear1=NULL,*front2=NULL,*rear2=NULL,*front3=NULL,*rear3=NULL;

void INS_polA()
{

 k=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter values for Coefficient and Power:");
    scanf("%d%d",&k->coeff,&k->pow);
    k->ptr=NULL;

    if(front1==NULL)
    {
        rear1=front1=k;
    }
    else
    {
        rear1->ptr=k;
        rear1=k;

    }
}



void INS_polB()
{

 p=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter values for Coefficient and power:");
    scanf("%d%d",&p->coeff,&p->pow);
    p->ptr=NULL;

    if(front2==NULL)
    {
        rear2=front2=p;
    }
    else
    {
        rear2->ptr=p;
        rear2=p;

    }
}

void display_polA()
{
    if(front1==NULL)
    {
        printf("Empty");
        return ;
    }
    k=front1;
    while(k)
    {
        printf("%dx^%d ",k->coeff,k->pow);
        k=k->ptr;
       // if(k->ptr != NULL)
        //printf(" + ");
    }

}
void display_polB()
{
    if(front2==NULL)
    {
        printf("Empty");
        return ;
    }
    p=front2;
    while(p)
    {
        printf("%dx^%d ",p->coeff,p->pow);
        p=p->ptr;
     //   if(p->ptr != NULL)
       // printf(" + ");
    }

}

 void add_pol()
 {

        k=front1;
        p=front2;
     while(k && p)
     {      printf("hello1");
         s=(struct emp*)malloc(sizeof(struct emp));
         s->ptr=NULL;
         if(k->pow > p->pow)
         {  printf("hello2");
             s->pow=k->pow;
             s->coeff=k->coeff;
             k=k->ptr;
             if(front3==NULL)
                {
                    front3=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                else
                {   printf("hello3");
                    rear3->ptr=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
         }
         else if (k->pow < p->pow)
         {  printf("hello4");
             s->pow=p->pow;
             s->coeff=p->coeff;
             p=p->ptr;
             if(front3==NULL)
                {   printf("hello5");
                    front3=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                else
                {   printf("hello6");
                    rear3->ptr=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
         }

         else if(k->pow == p->pow)
         {  printf("hello7");
             s->pow=k->pow;
             s->coeff=k->coeff + p->coeff;
             k=k->ptr;
             p=p->ptr;
             if(front3==NULL)
                {   printf("hello8");
                    front3=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                else
                {   printf("hello9");
                    rear3->ptr=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
         }

     }

     while (k)
    {
            s=(struct emp*)malloc(sizeof(struct emp));
            s->coeff=k->coeff;
            s->pow=k->pow;

            if(front3==NULL)
                {
                    front3=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                else
                {
                    rear3->ptr=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                k=k->ptr;
    }
     while (p)
    {
            s=(struct emp*)malloc(sizeof(struct emp));
            s->ptr=NULL;
            s->coeff=p->coeff;
            s->pow=p->pow;

            if(front3==NULL)
                {
                    front3=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                else
                {
                    rear3->ptr=s;
                    rear3=s;
                    rear3->ptr=NULL;
                }
                p=p->ptr;
    }
    printf("Added");

    }





 void display_result()
{
    if(front3==NULL)
    {
        printf("Empty");
    }
    else {
    s=front3;
    while(s)
    {
        printf("%dx^%d  ",s->coeff,s->pow);
        s=s->ptr;
    }
    }
}



int main()
{

    int x=0;
    while(x<8)
    {
        printf("\n1.Insert first polynomial \n2.Insert second polynomial\n3.Display first polynomial\n4.Display second polynomial\n5.Add polynomials\n6.Display resultant polynomial\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1 : INS_polA();
            break;
            case 2: INS_polB();
            break;
            case 3: display_polA();
            break;
            case 4: display_polB();
            break;
            case 5: add_pol();
            break;
            case 6: display_result();
            break;
            default: printf("Wrong choice");
            break;
        }
    }
    return 0;
}
