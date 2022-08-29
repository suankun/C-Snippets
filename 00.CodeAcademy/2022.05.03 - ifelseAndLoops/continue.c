#include <stdio.h>

int main()
{
    int iValue = 0;
	while (iValue < 13)
	{
		iValue++;
		if(iValue == 5)
			continue;
		printf("%d\t", iValue);
	}
	printf("\n");

    return 0;
}