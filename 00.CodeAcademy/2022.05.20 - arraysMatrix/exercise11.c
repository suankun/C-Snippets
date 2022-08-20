#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, j;
    int temp;
    int valuesArr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n;

    printf("Enter possition: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++)
    {
        temp = valuesArr[0];
        for(i = 1; i < 10; i++)
        {
        valuesArr[i - 1] = valuesArr[i];
        }
        valuesArr[9] = temp;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", valuesArr[i]);
    }
    printf("\n");

    return 0;
}