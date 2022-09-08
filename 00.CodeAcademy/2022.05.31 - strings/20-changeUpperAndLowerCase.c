// Напишете програма, която в даден стринг заменя всички малки букви с
// главни, всички главни букви с малки, а останалите символи не ги променя.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void changeUpperAndLowerCase(char *str) {
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == toupper(str[i])) {
			str[i] = tolower(str[i]);
		} else if (str[i] == tolower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
}

int main()
{
	char str[] = "Change Upper case charachter with Lower and VISE VERSA!";

	printf("%s\n", str);
	changeUpperAndLowerCase(str);
	printf("%s\n", str);
	
	return 0;
}

////////

// int toUpperCase()
// {
//     char str[] = "ABraKaDaBra";


// 	for (int i = 0; i < strlen(str); i++)
// 	{
// 		str[i] = toupper(str[i]);
// 	}

// 	printf("%s\n", str);

//     return 0;
// }

// int toLowerCase()
// {
//     char str[] = "ABraKaDaBra";

// 	for (int i = 0; i < strlen(str); i++)
// 	{
// 		str[i] = tolower(str[i]);
// 	}

// 	printf("%s\n", str);

//     return 0;
// }


// int main()
// {
//     char str[] = "ABraKaDaBra";

// 	for (int i = 0; i < strlen(str); i++)
// 	{
// 		if (isupper(str[i]) == 0)
// 			str[i] = tolower(str[i]);
// 		else
// 			str[i] = toupper(str[i]);
// 	}

// 	printf("%s\n", str);

//     return 0;
// }