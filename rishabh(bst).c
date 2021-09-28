#include <stdlib.h>
#include <stdio.h>


struct Node
{
	int data;
	struct Node *left, *right;
}*root;


struct Stack
{
	struct Node *new_node;
	struct Stack *next;
}*start;

struct MEMStack
{
	struct Node *new_node;
	struct MEMStack *next;
}*MEMstart;

void insert()
{
	int val;

	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter a value\n");
	scanf("%d", &val);
	node->data = val;
	node->left = NULL;
	node->right = NULL;

	if (root == NULL)
	{
		root = node;
	}
	else
	{
		struct Node *tmp;
		tmp = root;

		while(tmp)
		{
			if (val < tmp->data)
			{
				if (tmp->left == NULL)
				{
					tmp->left = node;
					break;
				}
				else
				{
					tmp = tmp->left;
				}
			}
			else
			{
				if (tmp->right == NULL)
				{
					tmp->right = node;
					break;
				}
				else
				{
					tmp = tmp->right;
				}
			}
		}

	}
}

void traverse()
{
	struct Stack *tmp;

	if (start != NULL)
	{
		tmp = start;
		while(tmp)
		{
			printf("%d\n", tmp->new_node->data);
			tmp = tmp->next;
		}
	}
}

void MEMpush(struct Node *tree_node)
{
	struct MEMStack *node = (struct MEMStack *)malloc(sizeof(struct MEMStack));
	node->new_node = tree_node;
	node->next = NULL;

	if (MEMstart == NULL)
	{
		MEMstart = node;
	}
	else
	{
		node->next = MEMstart;
		MEMstart = node;
	}
}

void push(struct Node *tree_node)
{
	struct Stack *node = (struct Stack *)malloc(sizeof(struct Stack));
	node->new_node = tree_node;
	node->next = NULL;

	if (start == NULL)
	{
		start = node;
	}
	else
	{
		node->next = start;
		start = node;
	}
}

struct Node* MEMpop()
{
	if (MEMstart != NULL)
	{
		struct MEMStack *tmp;
		tmp = MEMstart;
		MEMstart = tmp->next;
		return tmp->new_node;
	}
}

struct Node* pop()
{
	if (start != NULL)
	{
		struct Stack *tmp;
		tmp = start;
		start = tmp->next;
		return tmp->new_node;
	}
}

void inorder_disp()
{
	struct Node *curr;

	if (root != NULL)
	{
		curr = root;

		while(1)
		{
			if (curr == NULL && start != NULL)
			{
				curr = pop();
				printf("%d\n", curr->data);
				curr = curr->right;
				if (curr == NULL && start == NULL)
				{
					break;
				}
				continue;
			}
			push(curr);
			curr = curr->left;
		}
	}
}

void inorder(struct Node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d\n", root->data);
		inorder(root->right);
	}
}

void preorder_disp()
{
	struct Node *curr;

	if (root != NULL)
	{
		curr = root;

		while(1)
		{
			if (curr == NULL && start != NULL)
			{
				curr = pop();
				curr = curr->right;
				if (curr == NULL && start == NULL)
				{
					break;
				}
				continue;
			}
			printf("%d\n", curr->data);
			push(curr);
			curr = curr->left;
		}
	}
}

void preorder(struct Node *root)
{
	printf("%d\n", root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder_disp()
{
	struct Node *curr;

	if (root != NULL)
	{
		curr = root;

		MEMpush(curr);

		while(MEMstart != NULL)
		{
			curr = MEMpop();
			push(curr);
			if (curr->left)
			{
				MEMpush(curr->left);
			}
			if (curr->right)
			{
				MEMpush(curr->right);
			}
		}
		traverse();
	}
}

void postorder(struct Node *root)
{
	postorder(root->left);
	postorder(root->right);
	printf("%d\n", root->data);
}

int main(int argc, char const *argv[])
{
	root = NULL;
	start = NULL;
	MEMstart = NULL;
	int ch; char c;

	do
	{
		printf("1.Insert\n");
		printf("2.Inorder Traverse\n");
		printf("3.Preorder Traverse\n");
		printf("4.Postorder Traverse\n");
		printf("Enter choice\n");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: insert();
				break;
			case 2: inorder_disp();
				break;
			case 3: preorder_disp();
				break;
			case 4: postorder_disp();
				break;
			default: exit(0);
		}
		printf("Press Y or N\n");
		fflush(stdin);
		scanf("%c", &c);
	} while(c!='N' || c!='n');

	return 0;
}

