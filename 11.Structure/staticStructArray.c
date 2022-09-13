#include <stdio.h>

typedef struct point {
    int x;
    int y;
} Point;

int main() {
    Point pointsArray[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Enter x and y of point %d: ", i+1);
        scanf("%d %d", &pointsArray[i].x, &pointsArray[i].y);
    }
    
    printf("Points coordinates: \n");
    for (size_t j = 0; j < 5; j++)
    {
        printf("%d. {%d:%d}\n", j+1, pointsArray[j].x, pointsArray[j].y);
    }

    return 0;
}
