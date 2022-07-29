#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    int x;
    int y;
} Point;

int main()
{
    // Declaring a "Point" variable
    Point p1;

    // Initializing
    Point p2 = {5, 6};

    // Using Designated Initializer
    Point p3 = { .x = 3, .y = 4};

    // Using Designated Initializer (out of order)
    Point p4 = { .y = 10, .x = 2};

    // Designated Initializer (other member are init with 0)
    Point p5 = { .x = 1};
    
    return 0;
}