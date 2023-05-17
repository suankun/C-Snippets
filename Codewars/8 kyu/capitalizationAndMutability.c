#include <ctype.h>
#include <string.h>

char *capitalize_word (char *word)
{
  char str[20];
  strcpy(str, word);
  str[0] = toupper(str[0]); //  something goes wrong here !
  return str;
}
