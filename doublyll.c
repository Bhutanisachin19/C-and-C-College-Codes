//Wap to implement doubly linked list.

#include<stdio.h>
#include<alloc.h>
#include<process.h>

struct node
{	int info;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
void create(void);
void insert_beg(void);
void insert_loc(void);
void del_beg(void);
void del_loc(void);
void display(void);
NODE *ptr, *start=NULL;

void main()
{
	int choice;
	char ch;
	do
	{
		printf("\n MAIN MENU \n");
		printf("\n 1.creation");
		printf("\n 2.Insertion at the begining");
		printf("\n 3.Insertion at specified location");
		printf("\n 4.Deletion at the begining");
		printf("\n 5.Deletion at a specified location");
		printf("\n 6.Display ");
		printf("\n 7.Exit");
		printf("\n Enter ur choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	create();
						  break;
			case 2:  insert_beg();
						  break;
			case 3:	insert_loc();
						  break;
			case 4:	del_beg();
						  break;
			case 5:	del_loc();
						 break;
			case 6:	display();
						break;
			case 7: exit(0);
			default: printf("\n Wrong choice entered!!");
		}
	printf("\n do u want to continue(y/n)");
	fflush(stdin);
	scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
 }

void create(void)
{
	int value;
	NODE *pnew;
		printf("Enter the information");
		scanf("%d",&value);
		if(start==NULL)
		{
			start=(NODE*)malloc(sizeof(NODE));
			start->info=value;
			start->next=NULL;
			start->prev=NULL;
			ptr=start;
		}
		else
		{
			pnew=(NODE*) malloc (sizeof(NODE));
			pnew->info=value;
			pnew->next=NULL;
			pnew->prev=ptr;
			ptr->next=pnew;
			ptr=pnew;
		}
		printf("\n%d is inserted",value);
}

void insert_beg(void)
{
	int value;
	NODE *pnew,*pres;
		printf("Enter the information");
		scanf("%d",&value);
			pres=start;
			pnew=(NODE*)malloc(sizeof(NODE));
			pnew->info=value;
			pnew->prev=NULL;
			pnew->next=start;
			pres->prev=pnew;
			start=pnew;
}
void insert_loc(void)
{
	int elem,flag=0,value;
	NODE *pnew,*pres;
	pres=start;
	printf("Insert after::");
	scanf("%d",&elem);
	while(pres->next!=NULL)
	{
		if(pres->info==elem)
		{
			flag=1;
			break;
		}
		else
			pres=pres->next;
	}
	if(pres->next==NULL&&pres->info==elem)
	{
			printf("\n Enter the value :");
			scanf("%d",&value);
			pnew=(NODE*)malloc(sizeof(NODE));
			pnew->info=value;
			pnew->next=NULL;
			pnew->prev=pres->next;
			pres->next=pnew;
	}
	else if(flag==1)
	{
			printf("\n Enter the value :");
			scanf("%d",&value);
			pnew=(NODE*)malloc(sizeof(NODE));
			pnew->info=value;
			pnew->next=pres->next;
			pnew->prev=pres;
			pres->next=pnew;
			pres->next->prev=pnew;
	}
	else
	{
		 printf("\nValue not found ");
		 exit(0);
	}

}


void del_beg(void)
{
	NODE *pnew;
	pnew=start->next;
	free(start);
	start=pnew;
	printf("\nFirst Node is deleted : ");
}
void del_loc(void)
{
	int value,flag=0;
	NODE *temp,*pres,*temp1;
	pres=start;
	printf("Enter the value to be deleted::");
	scanf("%d",&value);
	while(pres->next!=NULL)
	{
		if(pres->info==value)
		{
			flag=1;
			break;
		}
		else
			pres=pres->next;
	}

	if(flag==0)
	{
		 printf("\nValue not found ");
		 exit(0);
	}
	else
	{
		temp=pres->next;
		temp1=pres->prev;
		free(pres);
		temp1->next=pres->next;
		temp->prev=temp1;
		pres->next=temp;
	}
}

void display(void)
{
	NODE *temp;
	temp=start;
  while(temp->next!=NULL)
  {
		printf("%d ",temp->info);
	temp=temp->next;
	}
	printf("%d",temp->info);
}

