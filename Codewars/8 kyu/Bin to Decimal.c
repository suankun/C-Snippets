// https://www.codewars.com/kata/57a5c31ce298a7e6b7000334/train/c
unsigned bin_to_decimal(const char *bin) {
    unsigned result = 0;
    // Iterate through each character in the binary string
    while (*bin != '\0') {
        // Multiply the current result by 2 (shift left) and add the current binary digit
        result = result * 2 + (*bin - '0');
        bin++; // Move to the next binary digit
    }
    return result;
}
