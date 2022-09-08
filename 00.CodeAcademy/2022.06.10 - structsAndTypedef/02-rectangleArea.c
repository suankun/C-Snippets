#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

struct rect
{
    struct point a;
    struct point b;
};

float distance(struct point a, struct point b);

int main()
{
    struct point a = {0, 1};
    struct point b = {1, 0};
    struct rect r1 = {a, b};
    printf("%f\n", distance(a, b));
    
    return 0;
}

float distance(struct point a, struct point b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
