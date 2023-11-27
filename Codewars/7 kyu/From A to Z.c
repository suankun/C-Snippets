// https://www.codewars.com/kata/6512b3775bf8500baea77663/train/c
void letters_range(char letters[26 + 1], const char range[3 + 1]) {
    // Initialize index for the letters string
    int index = 0;

    // Iterate through the range and append characters to letters
    for (char ch = range[0]; ch <= range[2]; ch++) {
        letters[index++] = ch;
    }

    // Null-terminate the string
    letters[index] = '\0';
}
//
void letters_range (char letters[26 + 1], const char range[3 + 1])
{
  for (int i = range[0]; i < (int)range[2] + 1; i++)
    letters[i - (int)range[0]] = (char)i;
  letters[range[2] + 1 - range[0]] = '\0';
}
