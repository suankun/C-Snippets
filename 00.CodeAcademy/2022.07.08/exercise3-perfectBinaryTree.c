#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int value)
{
    struct node *node = malloc(sizeof(struct node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int depth(struct node *node)
{
    int d = 0;
    while (node != NULL)
    {
        d++;
        node = node->left;
    }
    return d;
}

bool isPerfect(struct node *root, int d, int level)
{
    if (root == NULL)
        return true;
    
    if (root->left == NULL && root->right == NULL)
        return (d == level + 1);

    if (root->left == NULL || root->right == NULL)
        return false;

    return isPerfect(root->left, d, level + 1) &&
           isPerfect(root->right, d, level + 1);
}

bool is_Perfect(struct node *root)
{
    int d = depth(root);
    return isPerfect(root, d, 0);
}

int main()
{
    struct node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);

    if (is_Perfect(root))
        printf("The tree is a perfect binary tree\n");
    else
        printf("The tree is NOT a perfect binary tree\n");

    return 0;
}
