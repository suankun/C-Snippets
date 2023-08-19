#include <stdio.h>
#include <stdlib.h>

// Receinve a linked list and some "int" number
// Return the number of occurences of this "int" number in the list

typedef struct node {
    int data;
    struct node *next;
} Node;

int totalNumberAppearancesInList(Node *head, int num) {
    int count = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == num) count++;  // Found a corresponding node
        temp = temp->next;
    }
    return count;
}

int main() {

    return 0;
}