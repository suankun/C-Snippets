#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d -> ", root->key);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL) return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

struct node* leafDelete(struct node* root)
{
    if (root == NULL)
        return NULL;
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }
 
    root->left = leafDelete(root->left);
    root->right = leafDelete(root->right);
 
    return root;
}

int main() {
    struct node *root = NULL;
    root = newNode(6);
    root->left = newNode(5);
    root->right = newNode(10);
    root->left->left = newNode(3);
    root->right->left = newNode(8);
    root->right->right = newNode(13);
    root->left->left->left = newNode(1);
    root->right->left->left = newNode(7);
    root->right->right->left = newNode(11);
    root->right->right->right = newNode(14);
    root->right->right->left->right = newNode(11);

    printf("Before deleting\n");
    inorder(root);
    printf("\nAfter deleting\n");
    leafDelete(root);
    inorder(root);
    printf("\n");

    return 0;
}