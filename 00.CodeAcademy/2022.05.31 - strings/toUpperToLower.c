#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int toUpperCase()
{
    char str[] = "ABraKaDaBra";


	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}

	printf("%s\n", str);

    return 0;
}

int toLowerCase()
{
    char str[] = "ABraKaDaBra";

	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]);
	}

	printf("%s\n", str);

    return 0;
}


int main()
{
    char str[] = "ABraKaDaBra";

	for (int i = 0; i < strlen(str); i++)
	{
		if (isupper(str[i]) == 0)
			str[i] = tolower(str[i]);
		else
			str[i] = toupper(str[i]);
	}

	printf("%s\n", str);

    return 0;
}