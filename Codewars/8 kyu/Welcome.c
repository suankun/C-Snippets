// https://www.codewars.com/kata/577ff15ad648a14b780000e7/train/c
#include <stdbool.h>
#include <string.h>

// Define a structure to store language-greeting pairs
struct LanguagePair {
    const char *language;
    const char *greeting;
};

// Database of languages and greetings
const struct LanguagePair languageDatabase[] = {
    { "english", "Welcome" },
    { "czech", "Vitejte" },
    { "danish", "Velkomst" },
    { "dutch", "Welkom" },
    { "estonian", "Tere tulemast" },
    { "finnish", "Tervetuloa" },
    { "flemish", "Welgekomen" },
    { "french", "Bienvenue" },
    { "german", "Willkommen" },
    { "irish", "Failte" },
    { "italian", "Benvenuto" },
    { "latvian", "Gaidits" },
    { "lithuanian", "Laukiamas" },
    { "polish", "Witamy" },
    { "spanish", "Bienvenido" },
    { "swedish", "Valkommen" },
    { "welsh", "Croeso" }
};

const char *greet(const char *language) {
    for (size_t i = 0; i < sizeof(languageDatabase) / sizeof(languageDatabase[0]); i++) {
        if (strcmp(language, languageDatabase[i].language) == 0) {
            return languageDatabase[i].greeting;
        }
    }
  
    return "Welcome";
}
//
#define IP_ADDRESS_INVALID   "not a valid ipv4 or ipv6 ip address"
#define IP_ADDRESS_NOT_FOUND "ip address not in the database"
#define IP_ADDRESS_REQUIRED  "no ip address was supplied"

struct row
{
  const char * lang;
  const char * word;
};

struct row table[] = {{"english"   , "Welcome"},
                      {"czech"     , "Vitejte"},
                      {"danish"    , "Velkomst"},
                      {"dutch"     , "Welkom"},
                      {"estonian"  , "Tere tulemast"},
                      {"finnish"   , "Tervetuloa"},
                      {"flemish"   , "Welgekomen"},
                      {"french"    , "Bienvenue"},
                      {"german"    , "Willkommen"},
                      {"irish"     , "Failte"},
                      {"italian"   , "Benvenuto"},
                      {"latvian"   , "Gaidits"},
                      {"lithuanian", "Laukiamas"},
                      {"polish"    , "Witamy"},
                      {"spanish"   , "Bienvenido"},
                      {"swedish"   , "Valkommen"},
                      {"welsh"     , "Croeso"}};
  

const char* greet(char *language) 
{
  if (!language)
    return table[0].word;

  if (strcmp(language, IP_ADDRESS_INVALID) == 0)
    return IP_ADDRESS_INVALID;
  
  if (strcmp(language, IP_ADDRESS_NOT_FOUND) == 0)
    return IP_ADDRESS_NOT_FOUND;
    
  if (strcmp(language, IP_ADDRESS_REQUIRED) == 0)
    return IP_ADDRESS_REQUIRED;

  int nRows = sizeof(table)/sizeof(struct row);
  for (int i = 0; i < nRows; ++i)
  {
    if (strcmp(language, table[i].lang) == 0)
      return table[i].word;
  }
  return table[0].word;
}
