#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

void inOrderTraversal(struct node* root)
{
    if (root == NULL) return;
    inOrderTraversal(root->left);
    printf("%d->", root->item);
    inOrderTraversal(root->right);
}

void preOrderTraversal(struct node *root)
{
    if (root == NULL) return;
    printf("%d->", root->item);
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct node *root)
{
    if (root == NULL) return;
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    printf("%d->", root->item);
}

bool isFullBinaryTree(struct node *root)
{
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    if ((root->left) && (root->right))
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

    return false;
}

struct node* createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node * insertLeft(struct node *curr, int value)
{
    curr->left = createNode(value);
    return curr->left;
}

struct node * insertRight(struct node *curr, int value)
{
    curr->right = createNode(value);
    return curr->right;
}

int main()
{
    struct node *root = createNode(3);
    insertLeft(root, 9);
    insertRight(root, 20);
    insertRight(root->right, 7);
    insertLeft(root->right, 15);

    printf("\nInorder traversal: \n");
    inOrderTraversal(root);

    printf("\nPreorder traversal: \n");
    preOrderTraversal(root);

    printf("\nPostorder Traversal: \n");
    postOrderTraversal(root);

    if (isFullBinaryTree(root))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    printf("\n");
    return 0;
}
