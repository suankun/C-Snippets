// Времето се задава във 12 часов формат AM или PM. Напишете функция,
// която по зададено време в такъв формат го конвертира във 24 часов формат.
// 8. Note:
// - 12:00:00AM в 12 часов формат е 00:00:00 в 24 часов формат.
// - 12:00:00PM в 12 часов формат е 12:00:00 в 24 часов формат.
// Пример: 
// s = '12 : 01: 00PM'
// Return '12:01:00'.
//
// s = '12 : 01: 00AM'
// Return '00:01:00'.

#include<stdio.h>
#include<string.h>

int main()
{
    int hh, mm, ss;
    char a[3];
    
    printf("Enter hours 'hh' \t");
    scanf("%d", &hh);
    printf("Enter minutes 'mm' \t");
    scanf("%d", &mm);
    printf("Enter seconds 'ss' \t");
    scanf("%d", &ss);
    printf("Enter string 'am' or 'pm' \t");
    scanf("%s", &a);

    if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("The obtained 24-hour format of input is \t");
        printf("%02d:%02d:%02d", hh, mm, ss);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }

    return 0;
}