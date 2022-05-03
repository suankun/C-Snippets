#include <stdio.h>

int main()
{
    int mesec;
	
	printf("Enter a month number: ");
	scanf("%d", &mesec);

    if(mesec == 1 || mesec == 3 || mesec == 5 || mesec == 7 || mesec == 8 || mesec == 10 || mesec == 12)
    {
        printf("%d\n", 31);
    } 
    else
    {
        if (mesec == 2)
        {
            printf("28 or 29\n");
        }
        else
        {
            printf("%d\n", 30);
        }
        
    }
	
    return 0;
}