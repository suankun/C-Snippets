// Напишете функция, която по даден е масив от цели числа изчислява
// процента на неговите елементи, които са положителни, които са отрицателни и
// които са нула. Резултатът, който връща функцията да бъде масив от числа между 0
// и 1, даващи пропорцията на всеки вид числа.
//
// Програмата чете масива от числа, извиква горната функция и отпечатва
// като резултат процентите всеки на нов ред с 6 цифри след десетичната запетая.
// Example :
// 4. arr = [1,1,0, 1, 1]
// 5. There are n =5 elements, two positive, two negative and one zero.
// Their ratios are 2/5=0.400000, 2/5=0.400000 and 1/5 = 0.200000.
// Results are printed as:
// 4. 0.400000
// 5. 0.400000
// 6. 0.200000

#include <stdio.h>
#include <stdlib.h>

void positiveNegativePercent(int *arr)
{
    int i = 0;
    int positive = 0, negative = 0, zero = 0;
    float posPercent = 0, negPercent = 0, zerPercent = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
            positive++;
        if (arr[i] < 0)
            negative++;
        if (arr[i] == 0)
            zero++;
    }
    posPercent = positive/5.0;
    negPercent = negative/5.0;
    zerPercent = zero/5.0;
    printf("Positive: %.6f\nNegative: %.6f\nZero:     %.6f\n", posPercent, negPercent, zerPercent);
}

int main()
{
    int arr[5] = {1, 1, 0, -1, -1};
    
    positiveNegativePercent(arr);

    return 0;
}