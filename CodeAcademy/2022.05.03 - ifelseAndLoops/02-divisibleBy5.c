#include <stdio.h>

int main()
{
    int n;
    int lastDigit;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    if(lastDigit == 0 || lastDigit == 5)
    {
        printf("Deli se na 5\n");
    }
    else if (lastDigit == 2)
    {
        printf("Ne se deli na 5\n");
    }

    return 0;
}


// int main()
// {
// 	// read a number
// 	int num = 0;
// 	printf("Enter a number : ");
// 	scanf("%d", &num);

// 	// taking the last digit
// 	int lastDigit = num % 10;

// 	// check if the lastDigit is divisible by 5
// 	if (num % 5 == 0)
// 	{
// 		printf("Yes\n");
// 	}
// 	else 
// 	{
// 		printf("No\n");
// 	}

// 	return 0;
// }
