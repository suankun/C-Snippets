#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

// Average Temperature
// Hottest Temperature
// Coolest Temperature

int main() {
    float temperature[SIZE];
    int i;
    float sum = 0.0;
    float average_temp;
    int hottest_day = 0, coldest_day = 0;

    for (i=0; i<SIZE; i++) {
        printf("Enter the temp at day %d: ", i+1);
        scanf("%d", &temperature[i]);
    }

    for (i=0; i<SIZE; i++) {
        sum = sum + temperature[i];
        if (temperature[hottest_day]<temperature[i]) {
            hottest_day=i;
            continue;
        }
        if (temperature[coldest_day]>temperature[i]) coldest_day=i;
    }

    average_temp = sum / SIZE;

    printf("Average temperature = %f\n", average_temp);
    printf("The hottest day of the weeek was at day %d\n", hottest_day+1);
    printf("The temp on the hottest day was %f\n", temperature[hottest_day]);
    printf("The coldest day of the weeek was at day %d\n", coldest_day+1);
    printf("The temp on the coldest day was %f\n", temperature[coldest_day]);

    return 0;
}
