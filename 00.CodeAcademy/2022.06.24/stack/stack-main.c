#include "stack.h"

int main(){
    int n;
    int data;
    struct Stack *firstStack = init();
    printf("Enter n for first stack : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter number : ");
        scanf("%d",&data);
        push(firstStack,data);
    }

    Stack *secondStack = init();
    printf("Enter n for second stack : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter number : ");
        scanf("%d",&data);
        push(secondStack,data);
    }

    display(firstStack);
    display(secondStack);
}