#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ** months;

	months = malloc(12 * (sizeof(char *)));

	months[0] = "Jan";
	months[1] = "Feb";
	months[2] = "Mar";
	months[3] = "Apr";
	months[4] = "May";
	months[5] = "Jun";
	months[6] = "Jul";
	months[7] = "Aug";
	months[8] = "Sep";
	months[9] = "Oct";
	months[10] = "Nov";
	months[11] = "Dec";

	for (int i = 0; i < 12; i++)
	{
		printf("%s\t", months[i]);
	}

	printf("\n");

	return 0;
}