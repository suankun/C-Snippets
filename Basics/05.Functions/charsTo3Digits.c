/*
 * Functions that receives 3 characters,
 * if all the characters are of a digit type ('0' --> '9')
 *       an integer whish is a decimal representation of this 3 digits number
 * Otherwise return 0. '$'
 * Example:
 *      '1', '5', '9'
 *          return 159
 *      '2', '0', '6'
 *          return 206
 */

#include <stdio.h>

int charactersToInteger(char character1, char character2, char character3)
{
    int hundreds, tens, units;
    int finalResult;
    
    if(character1 >= '0' && character1 <= '9')
        hundreds = character1 - '0';
    else
        return 0;
        
    if(character2 >= '0' && character2 <= '9')
        tens = character2 - '0';
    else
        return 0;
        
    if(character3 >= '0' && character3 <= '9')
        units = character3 - '0';
    else
        return 0;
    
    return hundreds*100 + tens*10 + units;
}

int main()
{

    return 0;
}