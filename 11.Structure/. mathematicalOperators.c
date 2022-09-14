#include <stdio.h>
#include <string.h>

typedef struct point {
    int x;
    int y;
} Point;

Point addition(Point p1, Point p2) // "+"
{
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

void increment(Point *p) // "++"
{
    (*p).x++;
    (*p).y++;
}

int main() {
    Point point1 = {1, 2}, point2 = {4, 1};
    // point1++; - not possible
    increment(&point1);
    // point1 = point2 + 3; - not possible
    Point point3 = addition(point1, point2);

    return 0;
}
