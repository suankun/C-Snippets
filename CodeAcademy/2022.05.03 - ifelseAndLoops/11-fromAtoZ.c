#include <stdio.h>

int main()
{
	char character = 'a';

	while(character <= 'z')
	{
		printf("%c\t", character);
		character++;
	}
	printf("\n");
	
	return 0;
}


// int main()
// {
// 	char alfabet = 'a';
//     while (alfabet <= 'z')
// 	{
// 		printf("%c ", alfabet++);
// 	}
// 	printf("\n");
	
// 	return 0;
// }