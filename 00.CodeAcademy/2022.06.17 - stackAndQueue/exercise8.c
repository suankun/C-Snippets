# include <stdlib.h>
# include <stdio.h>
struct queue
{
 int data;
 struct queue *next;
 };

typedef struct queue node;
  node *front = NULL;
  node *rear = NULL;
  
  
//////////////////////////////
node* createnode(int data)
{
 node *temp;
 temp = (node *) malloc(sizeof(node)) ;
 temp->data=data;
 temp -> next = NULL;
 return temp;
}
//////////////////////////////////
void enqueue(int data)
{
  node *newnode;
  newnode = createnode(data);
  if(newnode == NULL)
 {
  printf("\n No");
  return;
  }
  if(front == NULL)
  {
   front = newnode;
   rear = newnode;
  }
  else
  {
   rear -> next = newnode;
   rear = newnode;
  }
  printf("\n\n\t Data Inserted into the Queue..");
}
///////////////////////////////////////////
void dequeue()
{
  node *temp;
  if(front == NULL)
  {
    printf("\n\n\t Empty Queue..");
    return;
  }
   temp = front;
   front = front -> next;
   printf("\n\n\t Deleted element from queue is %d ", temp -> data);
   free(temp);
}
/////////////////
void displayQ()
{
  node *temp;
  if(front == NULL)
  {
   printf("\n\n\t\t Empty Queue ");
  }
  else
  {
   temp = front;
   printf("\n\n\n\t\t Elements in the Queue are: ");
   while(temp != NULL )
  {
     printf("%d ", temp -> data);
     temp = temp -> next;
   }
  }
}

/////////////////////
char menu()
{
    char ch;
    system("clear");
    printf("\n \t..Queue operations using pointers.. ");
    printf("\n\t -----------**********-------------\n");
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter your choice: ");
    ch = getchar();
    return ch;
}
//////////////////////////

void main()
{
    int data;
    char ch;
    do
    {
        ch = menu();
        switch(ch)
        {
        case '1' :
             printf("\n Enter data "); scanf("%d", &data);
                enqueue(data);
                break;
        case '2' :
                dequeue();
                break;
        case '3' :
                displayQ();
                break;
        case '4':
                exit(0);
        }
        char c=getchar();
    } while(1);
}
