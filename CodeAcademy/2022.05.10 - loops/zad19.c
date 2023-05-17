#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter 'a': ");
	scanf("%d", &a);
	printf("Enter 'b': ");
	scanf("%d", &b);
    printf("Enter 'c': ");
	scanf("%d", &c);

    if(a < 0 || b < 0 || c < 0)
        printf("The numbers must be possitve integers!\n");
	else
    {
        if(a < b + c && b < a + c && c < a + b)
        {
            if(a == b && a == c && b == c)
                printf("Равностранен!\n");
            else if(a == b || b == c || c == a)
                printf("Равнобедрен!\n");
            else
                printf("Разностранен!\n");
        }    
        else
            printf("No!\n");
    }

    
	
	
	return 0;
}