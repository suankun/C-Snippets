/*
 * Write a program that initializes 2 variables (of Integer type).
 * The program should print the VALUE and the ADDRESS of each of these variables.
 */

#include <stdio.h>

int main()
{
    int grade1 = 80, grade2 = 90;
    int *p1;
    int *p2;
    
    p1 = &grade1;
    p2 = &grade2;
    
    printf("%d\n", *p1);
    printf("%d\n", *p2);
    
    printf("%p\n", &p1);
    printf("%p\n", &p2);
    
    return 0;
}