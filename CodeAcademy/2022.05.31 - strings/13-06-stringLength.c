// 6. Напишете програма, която намира дължината
// на въведен от клавиатурата стринг, използвайки указатели.

#include <stdio.h>

int stringLen(char *p)
{
    int count = 0;
    while (*p != '\n') {
        count++;
        p++;
    }
    return count;
}

int main() {
    char str[100];
    int buffer = 100;

    printf("Enter a string: ");
    fgets(str, buffer, stdin);

    int length = stringLen(str);
    
    printf("%d\n", length);

    return 0;
}