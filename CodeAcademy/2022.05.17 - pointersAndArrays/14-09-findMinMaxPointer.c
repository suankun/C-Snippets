// Напишете програма , която намира максималния и минималния
// елементи в масив , използвай к и указатели
#include <stdio.h>

#define SIZE 5

int minElement(int a[], int n)
{
    int i;
    int min = *a;
    for (i = 1; i < SIZE; i++)
    {
        if (min > *(a + i))
        {
            min = *(a + i);
        }
    }
    return min;
}

int maxElement(int a[], int n)
{
    int i;
    int max = *a;
    for (i = 1; i < SIZE; i++)
    {
        if (max < *(a + i))
        {
            max = *(a + i);
        }
    }
    return max;
}

int main()
{
    int a[SIZE] = {2, 4, 6, 8, 10};

    printf("Min: %d \n", minElement(a, SIZE));
    printf("Max: %d \n", maxElement(a, SIZE));

    return 0;
}

// int main()
// {
//     int arr[5] = {2, 4, 6, 8, 10};
//     int i;
//     int minValue;
//     int maxValue;
    
//     minValue = arr[0];
    
//     for(i = 1; i < 5; i++)
//     {
//         if(minValue > arr[i])
//         {
//             minValue = arr[i];
//         }
//     }

//     maxValue = arr[0];
    
//     for(i = 1; i < 5; i++)
//     {
//         if(minValue < arr[i])
//         {
//             maxValue = arr[i];
//         }
//     }
    
//     printf("Min: %d \n", minValue);
//     printf("Max: %d \n", maxValue);

//     return 0;
// }

// int main() {
//     // initialization of the array and the pointer
//     int arr[] = {2, 4, 6, 8, 10};
//     int *p = arr;

//     // finding min and max element in the array
//     int min = arr[0];
//     int max = arr[0];
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for (size_t i = 0; i < len; i++)
//     {
//         if (*(p+i) < min)
//         {
//             min = *(p+i);
//         }

//         if (*(p+i) > max)
//         {
//             max = *(p+i);
//         }
//     }
    
//     // printing the result
//     printf("min: %d, max: %d\n", min, max);

//     return 0;
// }