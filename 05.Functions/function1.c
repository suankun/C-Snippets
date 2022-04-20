/*
 * Greeting Function
 * prints 3 lines:
 * Hello!
 * Welcome to the best course!
 * Good luch!!!
 */

#include <stdio.h>

/*creating Function with no parameter and not return anything*/
void printGreetings()
{
    printf("Hello!\n");
    printf("Welcome to the best course!\n");
    printf("Good luch!!!\n");
}

int main()
{
    printf("I am writing from the main function!\n");
    /*calling the Function*/
    printGreetings();
    printf("Now I am after the function! Also at the main function.\n");
    
    return 0;
}