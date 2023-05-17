#include <stdio.h>

long reverseNum(long num)
{
    long result = 0;
    int currentDigit;

    while (num != 0) {
    currentDigit = num % 10;
    result = result * 10 + currentDigit;
    num /= 10;
  }


    return result;
}

int main()
{

    printf("Reverse num - %d\n", reverseNum(123));
    
    return 0;
}