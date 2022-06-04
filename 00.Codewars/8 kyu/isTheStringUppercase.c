#include <stdbool.h>
#include <string.h>

bool is_uppercase(const char *source)
{
    unsigned long i = 0;
    
    for (i = 0; i < strlen(source); i++)
    {
        if (source[i] >= 97 && source[i] <= 122)
            return false;
    }
    return true;
}

// Alternative solution:

#include <stdbool.h>

bool is_uppercase(const char *source){
    while (*source){
        if (islower(*source)){
            return false;
        }
        source++;
    }
    return true;
}
