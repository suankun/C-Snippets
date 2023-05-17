// 6. Напишете програма, която намира дължината на въведен от клавиатурата
// стринг, използвайки указатели.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkLength(char *str) {
    int counter = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        counter++;
    }
    printf("Length of the string is: %d\n", counter);
}

int main()
{
    // initialization
    char *str = "test string";

    // check for the length
    checkLength(str);

    // free memory
    free(str);

    return(0);
}

//////////

// int main ()
// {
// 	char str[] = "asdasddefwfvasjkwdj";
// 	int length = 0;
// 	int i;

// 	for (i = 0; str[i] != '\0'; i++)
//     {
//         length++; //Counting the length.
//     }
// 	printf("The length is %d characters.\n", length);

// 	return(0);
// }