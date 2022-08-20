/*
 * Double linked list. Write a program that adds
 * and deletes an item from the list by default that is stored in
 * him. Use the following item in the double-linked list
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct TDListNode
{
    int m_nValue ;
    struct TDListNode * m_pNextNode;
    struct TDListNode * m_pPrevNode ;
} TDListNode;

// Function to delete a node in a Doubly Linked List.
// head_ref --> pointer to head node pointer.
// del --> pointer to node to be deleted.
void deleteNode(struct TDListNode** head_ref, struct TDListNode* del)
{
	// base case
	if (*head_ref == NULL || del == NULL)
		return;

	// If node to be deleted is head node
	if (*head_ref == del)
		*head_ref = del->m_pNextNode;

	// Change next only if node to be deleted is NOT the last node
	if (del->m_pNextNode != NULL)
		del->m_pNextNode -> m_pPrevNode = del -> m_pPrevNode;

	// Change prev only if node to be deleted is NOT the first node
	if (del->m_pPrevNode != NULL)
		del->m_pPrevNode -> m_pNextNode = del -> m_pNextNode;

	// Free the memory occupied by del
	free(del);

	return;
}

// Insert a node at the beginning of the Doubly Linked List
void push(struct TDListNode** head_ref, int new_data)
{
	// Allocate node
	struct TDListNode* new_node = (struct TDListNode*)malloc(sizeof(struct TDListNode));

	// Put in the data
	new_node->m_nValue = new_data;

	// Prev is set to NULL
	new_node -> m_pPrevNode = NULL;

	// Link the old list off the new node
	new_node -> m_pNextNode = (*head_ref);

	// Change prev of head node to new node
	if ((*head_ref) != NULL)
		(*head_ref)->m_pPrevNode = new_node;

	// Move the head to point to the new node
	(*head_ref) = new_node;
}

// Print nodes in a given doubly linked list
void printList(struct TDListNode* node)
{
	while (node != NULL) {
		printf("%d ", node -> m_nValue);
		node = node -> m_pNextNode;
	}
}

int main()
{
	// Create the empty list.
	struct TDListNode* head = NULL;

	// Create the doubly linked list 10<->8<->4<->2
	push(&head, 2);
	push(&head, 4);
	push(&head, 8);
	push(&head, 10);

	printf("\n Original Linked list ");
	printList(head);

	// Delete nodes from the doubly linked list
	deleteNode(&head, head); // Delete first node
	deleteNode(&head, head->m_pNextNode); // Delete middle node
	deleteNode(&head, head->m_pNextNode); // Delete last node

	// Modified linked list will be NULL<-8->NULL
	printf("\n Modified Linked list ");
	printList(head);
    printf("\n");

	return 0;
}
