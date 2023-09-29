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
