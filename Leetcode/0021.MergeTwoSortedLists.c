// 21. Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by
// splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    /* a dummy first node to hang the result on */
    struct ListNode dummy;
  
    /* tail points to the last result node  */
    struct ListNode* tail = &dummy;
  
    /* so tail->next is the place to add new nodes
      to the result. */
    dummy.next = NULL;
    while (1)
    {
        if (list1 == NULL)
        {
            /* if either list runs out, use the
               other list */
            tail->next = list2;
            break;
        }
        else if (list2 == NULL)
        {
            tail->next = list1;
            break;
        }
        if (list1->val <= list2->val)
            MoveNode(&(tail->next), &list1);
        else
            MoveNode(&(tail->next), &list2);
  
        tail = tail->next;
    }
    return(dummy.next);
}

void MoveNode(struct ListNode** destRef, struct ListNode** sourceRef)
{
    /* the front source node  */
    struct ListNode* newNode = *sourceRef;
    assert(newNode != NULL);
  
    /* Advance the source pointer */
    *sourceRef = newNode->next;
  
    /* Link the old dest off the new node */
    newNode->next = *destRef;
  
    /* Move dest to point to the new node */
    *destRef = newNode;
}