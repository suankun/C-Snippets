// Задача 6. Напишете програма за въвеждане на елемент по средата на двойно
// свързан списък.

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}

	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

void printList(struct Node* node)
{
	struct Node* last;
	printf("Doubly linked list: \n");
	while (node != NULL) {
		printf("%d ", node->data);
		last = node;
		node = node->next;
	}
    printf("\n");
}

int main()
{
	struct Node* head = NULL;

	push(&head, 4);
	push(&head, 6);
	push(&head, 7);
	push(&head, 1);

	// Insert 8 in the middle of the DLL
	// 1->7->8->6->4->NULL
	insertAfter(head->next, 8);

	printList(head);

	return 0;
}
