#include <stdio.h>

struct distance
{
    int kms;
    int mtrs;
    int cms;
};

int main()
{
    struct distance first;
    printf("Enter the first kilometers: ");
    scanf("%d", &first.kms);
    printf("Enter the first meters: ");
    scanf("%d", &first.mtrs);
    printf("Enter the first centimeters: ");
    scanf("%d", &first.cms);

    struct distance second;
    printf("Enter the second kilometers: ");
    scanf("%d", &second.kms);
    printf("Enter the second meters: ");
    scanf("%d", &second.mtrs);
    printf("Enter the second centimeters: ");
    scanf("%d", &second.cms);

    int resultInCm = (first.kms * 10000) + (second.kms * 10000) +
    (first.mtrs * 100) + (second.mtrs * 100) + 
    first.cms + second.cms;

    int totalKm = 0;
    int totalMtrs = 0;
    int totalCms = 0;

    totalKm = resultInCm / 10000;
    resultInCm -= (totalKm * 10000);
    totalMtrs = resultInCm / 100;
    resultInCm -= (totalMtrs * 100);
    totalCms = resultInCm;

    printf("Total distance: %dkm, %dm, %dcm\n", totalKm, totalMtrs, totalCms);

    return 0;
}
