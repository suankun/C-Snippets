// https://www.codewars.com/kata/65128732b5aff40032a3d8f0/train/c
#include <string.h>

void neutralize(const char *s1, const char *s2, char *s3) {
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '+' && s2[i] == '+')
            s3[i] = '+';
        else if (s1[i] == '+' && s2[i] == '-')
            s3[i] = '0';
        else if (s1[i] == '-' && s2[i] == '+')
            s3[i] = '0';
        else if (s1[i] == '-' && s2[i] == '-')
            s3[i] = '-';
        i++;
    }
    s3[i] = '\0';
}
//
void neutralize (const char *s1, const char *s2, char *s3)
{
  int i=0;
  while(s1[i] != '\0'){
    if(s1[i] == s2[i])
      s3[i] = s1[i];
    else
      s3[i] = '0';
    
    i++;
  }
  s3[i] = '\0';
}
