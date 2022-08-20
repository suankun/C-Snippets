/*
 * Write a C program to find the highest frequency character in
 * a string using loop.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int a[100];
    int i, j;
    int count = 0;
    int maxFreqChar = 0;

    // User input.
    printf("Enter a string: ");
    scanf("%s", &str);

    // Checking the caracters and record max occurence number in a[].
    int len = strlen(str);
    for (i = 0; i < len; i++)  
    {
    	a[i] = 0;
    	count = 1;

        if(str[i])
        {
            // Checking current and next character
            for (j = i + 1; j < len; j++)  
            {   
                
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }
            }
        }
	    a[i] = count;
	    if (count >= maxFreqChar)
        {
	        maxFreqChar = count;
        }
 	}
    
    // Printing maximum occuring characters.
 	printf("Maximum occuring characters:");
 	for(j = 0; j < len; j++)  
	    {
	    	
	        if (a[j] == maxFreqChar)
    	    {
	             printf(" '%c',", str[j]);
	     	}
	   }  
     
	printf("\b = %d times \n", maxFreqChar);
   
    return 0;
}