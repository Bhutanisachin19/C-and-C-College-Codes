
//binary search tree

#include<stdlib.h>

//structure for binary tree

struct btree
{
    int data;
    struct btree *right,*left;
};


struct btree *k,*root,*node,*p; // pointers for tree



void insert()
{
    int flag=0;
    node = (struct btree *)malloc(sizeof(struct btree));
    node->left=NULL;
    node->right=NULL;

    printf("Enter the data \n");
    scanf("%d",&node->data);


    if(root==NULL)
        root=node;
    else
        {
            k=root;
            while(flag==0)
            {
                if(k->data > node->data)
                {
                    if(k->left==NULL)
                    {
                       k->left=node;
                       flag = 1;
                    }
                    else
                        k=k->left;
                }
                else if(k->data < node->data)
                {
                    if(k->right==NULL)
                    {
                        k->right=node;
                        flag = 1;
                    }
                    else
                        k=k->right;
                }
            }
        }
}


// recursive traversals

void inorder( struct btree * p)
{
    if(p==NULL)
        return;
    else
    {
        inorder(p->left);
        printf("%d \n",p->data);
        inorder(p->right);
    }
}



void preorder(struct btree *p)
{
    if(p==NULL)
        return;
    else
    {
         printf("%d \n",p->data);
         preorder(p->left);
         preorder(p->right);
    }
}



void postorder(struct btree *p)
{
    if(p==NULL)
        return;
    else
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d \n",p->data);
    }
}





int main()
{
    root=NULL;
    int c=0;
    while(c<5)
    {
        printf(" 1:Insert \n 2:Inorder recursive \n 3:Preorder recursive \n 4:Postorder recursive \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: insert();break;
           case 2: inorder(root);break;
           case 3:preorder(root);break;
           case 4:postorder(root);break;
        }
    }
}

