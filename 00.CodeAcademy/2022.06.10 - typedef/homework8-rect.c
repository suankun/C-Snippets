/* Task 8. Create a struct rect that contains in
 * two points. Create an object of this structure called
 * screen. Use the makepoint function to set a starting point
 * on the screen (0, 0) and end point (15, 15). Fill the space
 * between them with dashes.
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int x;
    int y;
}rect;

typedef struct {
    rect a;
    rect b;
}screen;

char makepoint(int a, int b)
{
        return '-';
}


int main(){

    screen rectangle;
    rectangle.a.x = 0;
    rectangle.a.y = 0;
    rectangle.b.x = 15;
    rectangle.b.y = 15;

    for (int i = rectangle.a.x; i < rectangle.b.x + 1; i++) {
        for (int j = rectangle.a.y; j < rectangle.b.y + 1; j++) {
            printf(" %c ", makepoint(i, j));
        }
        printf("\n");
    }
    return 0;
}