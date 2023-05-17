// Задача 22. Създайте безкраен цикъл с for (;;) и принтирайте числото,
// което на вс я к а итерация на цикъл а се увеличава с едно. Когато
// числото стигне 48, излезте от цикъла с break

#include <stdio.h>

int main()
{
    int iValue = 0;
	for(;;)
	{
		iValue++;
		if(iValue > 5)
			break;
		printf("%d\t", iValue);
	}
	printf("\n");

    return 0;
}