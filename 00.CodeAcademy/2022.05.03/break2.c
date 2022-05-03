#include <stdio.h>

int main()
{
    int iValue = 0;
	for(;;)
	{
		iValue++;
		if(iValue > 48)
			break;
		printf("%d\t", iValue);
	}
	printf("\n");

    return 0;
}