#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    int max = arr[0][0];
    int min = arr[0][0];

    for (i = 0; i < 3; i++)
    {
        if (arr[i][i] > max)
        {
            max = arr[i][i];
        }
        if (arr[i][i] < min)
        {
            min = arr[i][i];
        }
    }  

    printf("max = %d\n", max);
    printf("min = %d\n", min);


    return 0;
}