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
