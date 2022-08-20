#include <stdio.h>

struct car
{
    char brand[30];
    char color[30];
    int km;
};

int main()
{
    struct car first;
    printf("Enter the brand: ");
    scanf("%s", &first.brand);
    printf("Enter the color: ");
    scanf("%s", &first.color);
    printf("Enter the km: ");
    scanf("%d", &first.km);

    printf("Brand: %s\n", first.brand);
    printf("Color: %s\n", first.color);
    printf("km: %d\n", first.km);
    
    return 0;
}
