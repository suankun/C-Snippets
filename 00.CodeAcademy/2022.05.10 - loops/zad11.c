#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
        printf("Perfect number!");
    else
        printf("Not a perfect number!");
    
    return 0;
}