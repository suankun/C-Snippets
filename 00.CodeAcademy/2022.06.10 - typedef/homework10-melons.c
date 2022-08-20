#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structs
struct pumpkin
{
    int r;
    float thickness;
};

struct waterMelon
{
    int r;
    float thickness;
};

// Prototypes
void autoFillMelon(struct waterMelon *melon, int count);
void autoFillPumpkin(struct pumpkin *pumpk, int count);
bool isMelonBetter(struct waterMelon *melon, struct pumpkin *pumpk, int count);

// Main
int main()
{
    struct waterMelon *melon;
    melon = malloc(10 * sizeof(melon));
    autoFillMelon(melon, 10);

    struct pumpkin *pumpk;
    pumpk = malloc(10 * sizeof(pumpk));
    autoFillPumpkin(pumpk, 10);

    if (isMelonBetter(melon, pumpk, 10))
    {
        printf("\nIt's better to buy watermelons with radius %dcm and crust %.2fcm\n"
                "insted pumpkins with radius %dcm and crust %.2fcm\n",
                melon[0].r, melon[0].thickness, pumpk[0].r, pumpk[0].thickness);
    }
    else
    {
        printf("\nIt's better to buy pumpkins with radius %dcm and crust %.2fcm\n"
                "insted watermelons with radius %dcm and crust %.2fcm\n",
                pumpk[0].r, pumpk[0].thickness, melon[0].r, melon[0].thickness);
    }
    
    return 0;
}

void autoFillMelon(struct waterMelon *melon, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        melon[i].r = rand() % 140 + 15;
        melon[i].thickness = rand() % 4 + 1;
        melon[i].thickness -= 0.5;
    }
}

void autoFillPumpkin(struct pumpkin *pumpk, int count)
{
    for (size_t i = 1; i < count; i++)
    {
        pumpk[i].r = rand() % 95 + 35;
        pumpk[i].thickness = rand() % 9 + 3;
        pumpk[i].thickness /= 10;
    }
}

bool isMelonBetter(struct waterMelon *melon, struct pumpkin *pumpk, int count)
{
    for (size_t i = 1; i < count; i++)
    {
        melon[0].r += melon[i].r;
        melon[0].thickness += melon[i].thickness;
    }

    for (size_t i = 1; i < count; i++)
    {
        pumpk[0].r += pumpk[i].r;
        pumpk[0].thickness += pumpk[i].thickness;
    }

    melon[0].r /= count;
    melon[0].thickness /= count;
    
    pumpk[0].r /= count;
    pumpk[0].thickness /= count;

    if (melon[0].r >= pumpk[0].r)
    {
        return true;
    }

    return false;
}
