#include <stdio.h>

int main ()
{
    int num;
    int sum = 0;
    int temp;
    int tempNum;

    printf("Enter a num: ");
    scanf("%d", &num);

    tempNum = num;
    while(num != 0)
    {
        temp = num % 10;
        sum += temp * temp * temp;
        num /= 10;
    }
    if(sum = tempNum)
        

    return 0;
}