#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

// Receinve a linked list and some "int" number
// Go through all the nodes of the list
// Return "true" if this number exists in the list
// Otherwise if it doesn't exists - we should return "false"

typedef struct node {
    int data;
    struct node *next;
} Node;

// bool isNumberInList(Node *head, int num) {
//     bool answer = false;
//     Node *cur_node = head;
//     while (cur_node->next != NULL)
//     {
//         if (cur_node->data == num) answer = true;
//         cur_node = cur_node->next;
//     }
//     return answer;
// }

bool isNumberInList(Node *head, int num) {
    Node *cur_node = head;
    while (cur_node->next != NULL)
    {
        if (cur_node->data == num) return true;
        cur_node = cur_node->next;
    }
    return false;
}

int main() {

    return 0;
}