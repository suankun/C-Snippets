int get_the_vowels (const char *string)
{
    int count = 0;
    int isAFind = 0, isEFind = 0, isIFind = 0, isOFind = 0, isUFind = 0;

    
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' && isAFind == 0)
        {
            isAFind = 1;
            count++;
        }
        else if (string[i] == 'e' && isAFind == 1 && isEFind == 0)
        {
            isEFind = 1;
            count++;
        }
        else if (string[i] == 'i' && isEFind == 1 && isIFind == 0)
        {
            isIFind = 1;
            count++;
        }
        else if (string[i] == 'o' && isIFind == 1 && isOFind == 0)
        {
            isOFind = 1;
            count++;
        }
        else if (string[i] == 'u' && isOFind == 1)
        {
            isUFind = 1;
            count++;
        }

        if (isUFind == 1)
        {
            isAFind = isEFind = isIFind = isOFind = isUFind = 0;
        }
    }

  return count;
}

// Alternative solution:

int get_the_vowels(const char *string) {
    char *vowels = "aeiou";
    int count = 0;
    while(*string) {
        count += *string++ == vowels[count % 5];
    }
    return count;
}