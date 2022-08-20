#include <stdio.h>
#include <stdlib.h>

char * removeChars(char *string)
{
    for (int i = 0, j; string[i] != '\0'; ++i) {

      
        while (!(string[i] >= 'a' && string[i] <= 'z') &&
        !(string[i] >= 'A' && string[i] <= 'Z') &&
        !(string[i] == ' ') &&
        !(string[i] == '\0'))
        {
            for (j = i; string[j] != '\0'; ++j)
            {
                string[j] = string[j + 1];
            }
            string[j] = '\0';
        }
   }
   return string;
}

char ** sepByWords(char *letters)
{
    int n = strlen(letters);
    char ** dumi = malloc(n * sizeof(char*));

    char = letters[0];
    while (char != ' ')
    {
        *dumi
    }
    
}

char sepByWords(char *string)
{
    char string[100];
    char arrWords[10][10]; 
    int i,j,ctr; 	
 
    j = 0; ctr = 0;
    for(i = 0; i <= (strlen(string)); i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(string[i] == ' '||string[i] == '\0')
        {
            arrWords[ctr][j] = '\0';
            ctr++;  //for next word
            j = 0;    //for next word, init index to 0
        }
        else
        {
            arrWords[ctr][j] = string[i];
            j++;
        }
    }
    
    return arrWords;
}

int main()
{
    char string[] = "asd 732 j'pj 90 adbhk 32a kdsds";
    removeChars(string);
    printf("%s\n", string);
    char arrOfWords[10][10] = sepByWords(string);

    for(int i = 0; i < 10; i++)
        printf(" %s\n",arrOfWords[i]);


    return 0;
}