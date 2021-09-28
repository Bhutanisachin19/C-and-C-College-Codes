int p1=0;
int p2=0;
int p3=0;

struct node
	{
	int priority;
	int info;
	struct node *link;
};
struct node *front=NULL,*k,*q;


void insert(int item,int priority)
{
    if(priority==1)
    {
        p1++;
    }
    if(priority==2)
    {
        p2++;
    }
    if(priority==3)
    {
        p3++;
    }
    if(p1>3)
    {
        if(p2<=3)
        {
            priority=2;
        }
        else if(p3<=3)
        {
            priority=3;
        }
        else
        {
            printf("Hello YOu are here.!");
        }
    }
	k = (struct node *)malloc(sizeof(struct node));
	k->info = item;
	k->priority = priority;

	if( front == NULL || priority < front->priority )
	{
		k->link = front;
		front = k;
	}
	else
	{
		q = front;
		while( q->link != NULL && q->link->priority <= priority )
			q=q->link;
		k->link = q->link;
		q->link = k;
	}
}
