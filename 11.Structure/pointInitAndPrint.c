// Exercise: Write 2 functions:
//     Func 1: gets a point variable and prints its information.
//     Func 2: responsible for getting a point input from the user and then return it.

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point inputPoint() {
    struct point myPoint;
    printf("Enter coodinates x and y: ");
    scanf("%d %d", &myPoint.x, &myPoint.y);
    return myPoint;
}

void printPoint(struct point one) {
    printf("x: %d, y: %d\n", one.x, one.y);
}

int main() {
    struct point one = inputPoint();
    printf("Before changes: ");
    printPoint(one);
    one.x += 1;
    one.y += 3;
    printf("After changes: ");
    printPoint(one);

    return 0;
}
