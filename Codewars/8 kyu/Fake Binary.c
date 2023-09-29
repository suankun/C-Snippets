// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/c
void fakeBin(const char *digits, char *binary) {
    while (*digits != '\0') {
        if (*digits < '5') {
            *binary = '0';
        } else {
            *binary = '1';
        }
        digits++;
        binary++;
    }
    *binary = '\0';
}
//
void fakeBin(const char *digits, char *buffer) {
  for (int i = 0; digits[i] != 0; i++) {
    *buffer++ = digits[i] >= '5' ? '1' : '0';
  }
  *buffer = 0;
}
