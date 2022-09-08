// 7. Напишете програма, която конкатенира два стринга, използвайки указатели.

#include <stdio.h>  

int main() {  
    char first_string[20]; // declaration of char array variable  
    char second_string[20]; // declaration of char array variable  
    int i = 0, j = 0;  // integer variable declaration  

    printf("Enter the first string: ");  
    scanf("%s",first_string);  
    printf("Enter the second string: ");  
    scanf("%s",second_string);  

    for(i = 0; first_string[i] != '\0'; i++);   

    first_string[i] = ' ';
    i++;

    for(j = 0; second_string[j] != '\0'; j++) { 
        first_string[i] = second_string[j];  
        i++;  
    }

    first_string[i] = '\0';  
    printf("Concatenated string: %s\n", first_string);  

    return 0; 
}
