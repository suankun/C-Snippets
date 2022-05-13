/*
 * Write a C program, which when entering a natural number from the interval
 * [10 - 30,000] displays its numbers in the Morse code.
 * The digits of the number are displayed from right to left
 * Input data: x - natural number.
 * 0: "-----"
 * 1: ".----"
 * 2: "..---"
 * 3: "...--"
 * 4: "....-"
 * 5: "....."
 * 6: "-...."
 * 7: "--..."
 * 8: "---.."
 * 9: "----."
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

int main()
{
    char str[25],str1[100];

    fflush(stdin);
    printf("Enter any String to Convert into Morse Code :: ");
    gets(str);

    int j=0;
    for(int i=0;i<=strlen(str);i++)
    {
        switch(str[i])
        {
        case '0':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '1':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '2':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '3':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '4':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case '5':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '6':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '7':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '8':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '9':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='.';
            break;
        }

        j++;
    }

    str1[j-1]='\0';
    puts(str1);

    return 0;
}