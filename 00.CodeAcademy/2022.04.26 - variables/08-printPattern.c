/*
 * Functions that print the following pattern:
 *      ******
 *            ******
 *                  ******
 *                        ******
 */

#include <stdio.h>
/*First solution:*/
int main()
{
    /*Printing the result.*/
    printf("******\n");
    printf("      ******\n");
    printf("            ******\n");
    printf("                  ******\n");

    return 0;
}

/*Second solution:*/
int main()
{
    /*Printing the result using nested for loops.*/
    int blankSpaces, i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < i; j++)
		{
			printf("      ");
		}
        printf("******\n");
    }

    return 0;
}

// int main() {
// 	for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < i; j++) {
//             printf("     ");
//         }
//         printf("******\n");
//     }

// 	return 0;
// }