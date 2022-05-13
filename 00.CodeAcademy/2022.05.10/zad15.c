#include <stdio.h>

int main()
{
    int n;
    int i, j, k;
    int currentValue = 1;
    int blankSpaces;
    
    printf("Enter a n: ");
    scanf("%d", &n);
    
    blankSpaces = n;
    
    for(i = 0; i <= n ; i++)
	{
		for(k = blankSpaces; k > 0; k--)
		{
			printf(" ");
		}
		for(j = 0; j <= i; j++)
		{
            if(j == 0)
            {
                currentValue = 1;
                printf("%d ", currentValue);
            }
            else
			{
                currentValue = currentValue * (i - j + 1) / j;
                printf("%d ", currentValue);
            }
			
		}
		
		printf("\n");
		blankSpaces--;
	}
	    
    return 0;
}