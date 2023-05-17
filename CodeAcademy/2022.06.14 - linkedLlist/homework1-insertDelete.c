/*
 * Write a program that adds and
 * deletes an item from a list by item in the list.
 */

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct TDListNode {
  int m_nValue;
  struct TDListNode* m_pNextNode;
};

// Insert at the beginning
void insertAtBeginning(struct TDListNode** head_ref, int new_data)
{
    // Allocate memory to a node
    struct TDListNode* new_node = (struct TDListNode*)malloc(sizeof(struct TDListNode));

    // insert the data
    new_node->m_nValue = new_data;

    new_node->m_pNextNode = (*head_ref);

    // Move head to new node
    (*head_ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct TDListNode* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }

    struct TDListNode* new_node = (struct TDListNode*)malloc(sizeof(struct TDListNode));
    new_node->m_nValue = new_data;
    new_node->m_pNextNode = prev_node->m_pNextNode;
    prev_node->m_pNextNode = new_node;
}

// Insert the the end
void insertAtEnd(struct TDListNode** head_ref, int new_data)
{
    struct TDListNode* new_node = (struct TDListNode*)malloc(sizeof(struct TDListNode));
    struct TDListNode* last = *head_ref; /* used in step 5*/

    new_node->m_nValue = new_data;
    new_node->m_pNextNode = NULL;

    if (*head_ref == NULL)
    {
      *head_ref = new_node;
      return;
    }

    while (last -> m_pNextNode != NULL) 
    {
        last = last -> m_pNextNode;
    }
    last -> m_pNextNode = new_node;
    return;
}

// Delete a node
void deleteNode(struct TDListNode** head_ref, int key)
{
    struct TDListNode *temp = *head_ref, *prev;

    if (temp != NULL && temp->m_nValue == key) {
    *head_ref = temp->m_pNextNode;
    free(temp);
    return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->m_nValue != key) {
    prev = temp;
    temp = temp->m_pNextNode;
    }

    // If the key is not present
    if (temp == NULL) return;

    // Remove the node
    prev->m_pNextNode = temp->m_pNextNode;

    free(temp);
}

// Search a node
int searchNode(struct TDListNode** head_ref, int key)
{
    struct TDListNode* current = *head_ref;

    while (current != NULL) {
    if (current->m_nValue == key) return 1;
    current = current->m_pNextNode;
    }
    return 0;
}

// Print the linked list
void printList(struct TDListNode* node)
{
    while (node != NULL)
    {
      printf(" %d ", node->m_nValue);
      node = node->m_pNextNode;
    }
}

// Driver program
int main()
{
    struct TDListNode* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->m_pNextNode, 5);

    printf("Linked list: ");
    printList(head);

    printf("\nAfter deleting an element: ");
    deleteNode(&head, 3);
    printList(head);

    int item_to_find = 3;
    if (searchNode(&head, item_to_find)) {
    printf("\n%d is found", item_to_find);
    } else {
    printf("\n%d is not found", item_to_find);
    }

    printf("\n");

    return 0;
}