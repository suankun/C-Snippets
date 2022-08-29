// 2. Да се напише функция, връщаща максималното от две
// Програмата ще чете 2 числа и извежда максималното от тези 2 числа,
// като използва написаната функция. Задачата да се направи по два
// начина с оператор if и с тернарен оператор.

#include <stdio.h>

int maxBetween2(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int findMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 3, b = 5;

    printf("Maximum - %d\n", maxBetween2(a, b));
    printf("Maximum - %d\n", findMax(a, b));
    
    return 0;
}