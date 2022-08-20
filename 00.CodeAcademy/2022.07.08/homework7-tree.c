// Задача 7. Да се построи наредено двоично дърво за
// търсене чрез последователно добавяне на следните
// върхове:
// а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
// б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
// в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
// г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
// д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
// Да се сравнят получените дървета. Какви изводи могат да
// се направят?

#include <stdio.h>
#include <stdlib.h>

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
	// а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
	// б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
	// в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
	// г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
	// д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
    struct node *root = createNode(7);
    insertLeft(root, 7);
    insertRight(root, 14);
    insertRight(root->left, 28);
    insertRight(root->right, 35);
    insertLeft(root->left, 65);
    insertLeft(root->right, 12);
    insertRight(root->left->left, 18);
    insertRight(root->left->right, 42);
    insertRight(root->right->left, 81);
    insertRight(root->right->right, 64);
    insertLeft(root->left->left, 61);
    insertLeft(root->left->right, 4);
    insertLeft(root->right->left, 13);

    printf("\nInorder traversal: \n");
    inOrderTraversal(root);
    printf("\n");
    return 0;
}
