#include <stdio.h>

int main()
{
    int n;

    printf("Enter number between 1 and 3: ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("1");
    }
    else if (n == 2)
    {
        printf("2");
    }
    else if (n == 3)
    {
        printf("3");
    }
    
    

    return 0;
}