#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

struct node* newNode(int value)
{
    struct node *node = malloc(sizeof(struct node));
    node->item = value;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

bool checkHeightBalance(struct node *root, int *height)
{
    int leftHeight = 0, rightHeight = 0;
    int l = 0, r = 0;

    if (root == NULL)
    {
        *height = 0;
        return 1;
    }
    l = checkHeightBalance(root->left, &leftHeight);
    r = checkHeightBalance(root->right, &rightHeight);

    *height = (leftHeight - rightHeight ? leftHeight : rightHeight) + 1;

    if ((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2))
        return 0;

    else
        return l && r;
}

int main()
{
    int height = 0;

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    if (checkHeightBalance(root, &height))
        printf("The tree is balanced\n");
    else
        printf("The tree is NOT balanced\n");

    return 0;
}
