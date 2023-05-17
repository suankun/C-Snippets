// Задача 2. Напишете програма, която събира две дистанции, които са
// изразени в километри, метри, сантиметри. Дистанциите трябва да бъдат
// въведени от потребителя. Принтирайте изходните и резултатната
// дистанция.

#include <stdio.h>

struct Dist {
    int km;
    int mtrs;
    int cm;
};

int main() {
    struct Dist firstDist;
    struct Dist secondDist;

    printf("Enter first distance km, mtrs, cm: ");
    scanf("%d %d %d", &firstDist.km, &firstDist.mtrs, &firstDist.cm);

    printf("Enter second distance km, mtrs, cm: ");
    scanf("%d %d %d", &secondDist.km, &secondDist.mtrs, &secondDist.cm);

    printf("First dist: %d, %d, %d\n", firstDist.km, firstDist.mtrs, firstDist.cm);
    printf("First dist: %d, %d, %d\n", secondDist.km, secondDist.mtrs, secondDist.cm);

    int resDist = (firstDist.km * 100000) + (secondDist.km * 100000) + 
                  (firstDist.mtrs * 100) + (secondDist.mtrs * 100) +
                  firstDist.cm + secondDist.cm;

    int km   = resDist / 100000;
    resDist -= (km * 100000);
    int mtrs = resDist / 100;
    resDist -= (mtrs * 100);
    int cm = resDist;

    printf("%dkm, %dm, %dcm\n", km, mtrs, cm);

    return 0;
}

//////////////////

// struct distance
// {
//     int kms;
//     int mtrs;
//     int cms;
// };

// int main()
// {
//     struct distance first;
//     printf("Enter the first kilometers: ");
//     scanf("%d", &first.kms);
//     printf("Enter the first meters: ");
//     scanf("%d", &first.mtrs);
//     printf("Enter the first centimeters: ");
//     scanf("%d", &first.cms);

//     struct distance second;
//     printf("Enter the second kilometers: ");
//     scanf("%d", &second.kms);
//     printf("Enter the second meters: ");
//     scanf("%d", &second.mtrs);
//     printf("Enter the second centimeters: ");
//     scanf("%d", &second.cms);

//     int resultInCm = (first.kms * 10000) + (second.kms * 10000) +
//     (first.mtrs * 100) + (second.mtrs * 100) + 
//     first.cms + second.cms;

//     int totalKm = 0;
//     int totalMtrs = 0;
//     int totalCms = 0;

//     totalKm = resultInCm / 10000;
//     resultInCm -= (totalKm * 10000);
//     totalMtrs = resultInCm / 100;
//     resultInCm -= (totalMtrs * 100);
//     totalCms = resultInCm;

//     printf("Total distance: %dkm, %dm, %dcm\n", totalKm, totalMtrs, totalCms);

//     return 0;
// }
