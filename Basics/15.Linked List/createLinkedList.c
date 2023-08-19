#include <stdio.h>
#include <stdlib.h>

// Create linked list
// Receive numbers as input from the user
// Every recieved number should be added to the end of the list
// The "stopping condition" would be when number is "-1"
// Return the New List

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *createListOfNumbers() {
    Node *head;  // Always keep the head of the linked list
    Node *cur_node;

    int num;

    printf("Please enter a number of '-1' to finish: \n");
    scanf("%d", &num);

    if (num == -1) return NULL;
    // We assume that the first num was some legit number (legit data)
    head = (Node*)malloc(sizeof(Node));
    cur_node = head;
    cur_node->data = num;

    printf("Please enter a number of '-1' to finish: \n");
    scanf("%d", &num);

    while (num != -1)  // As long as we haven't reached our stoping condition
    {
        cur_node->next = (Node*)malloc(sizeof(Node));
        cur_node = cur_node->next;
        cur_node->data = num;
        printf("Please enter a number of '-1' to finish: \n");
        scanf("%d", &num);
    }

    cur_node->next = NULL;

    return head;  // The address of the first node in this list
}

int main() {

    return 0;
}