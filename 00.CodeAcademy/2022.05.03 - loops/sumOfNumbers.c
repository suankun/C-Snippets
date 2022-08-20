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