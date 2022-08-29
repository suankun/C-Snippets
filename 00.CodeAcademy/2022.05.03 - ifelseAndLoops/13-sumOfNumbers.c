#include <stdio.h>

int main()
{
    int num1, num2;
    int sum = 0;
    
    printf("Enter a num1: ");
    scanf("%d", &num1);
	printf("Enter a num2: ");
    scanf("%d", &num2);
    
    while(num1 <= num2)
    {
    	sum += num1;
    	num1++;
	}
    
    printf("%d\n", sum);
    
    return 0;
}

// int main()
// {
// 	int a = 5, b = 9; // sum is 35 (5 + 6 + 7 + 8 + 9)
// 	int sum = 0;

//     while (a <= b)
// 	{
// 		sum += a;
// 		a++;
// 	}
// 	printf("%d\n", sum);
	
// 	return 0;
// }