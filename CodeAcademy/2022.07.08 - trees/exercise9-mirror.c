    /* 
     * C Program to Create a Mirror Copy of a Tree 
     *          40
                /\
               20 60
               /\  \
             10 30  80
                     \
                      90
     */
#include <stdio.h>
#include <stdlib.h> 

struct btnode
{
    int value;
    struct btnode *left, *right;
};

typedef struct btnode node;

node *root = NULL, *temp, *list;

/* function prototypes */

void insert(node *, node *);

void inorder(node *);

void mirror(node *); 

void main()
{
    node *new = NULL;
    int num  = 1;
    
    printf("Enter the elements of the tree(enter 0 to exit)\n");
    while (1)
    {
        scanf("%d",  &num);
        if (num == 0)
            break;

        new  =  malloc(sizeof(node));
        new->left  =  new->right  =  NULL;
        new->value  =  num;

        if (root  ==  NULL)
            root  =  new;
        else
        {
            insert(new, root);
        }
    }
    printf("elements in a tree in inorder are\n");
    inorder(root);
    temp = root;
    printf("\nmirror image of the elements are\n");
    mirror(temp); 
    inorder(temp);
    printf("\n");      
}

/* displaying nodes of a tree using inorder */

void inorder(node *list)
{

    if (list != NULL)
    {
        inorder(list->left);
        printf("%d\t", list->value);
        inorder(list->right);
    }
}  

/* inserting nodes into the tree */

void insert(node * new , node *root)
{
    if (new->value>root->value)
    {
        if (root->right  ==  NULL)
            root->right  =  new;
        else
            insert (new, root->right);
    }

    if (new->value < root->value)
    {
        if (root->left == NULL)
            root->left = new;
        else
            insert (new, root->left);
    }
}

/* mirror image of nodes */
void mirror(node *temp)
{
    node *temp1;
    if (temp == NULL)
        return;

    temp1 = temp->left;
    temp->left = temp->right;
    temp->right = temp1;
    mirror(temp->left);
    mirror(temp->right);
}