// https://www.codewars.com/kata/5913152be0b295cf99000001/train/c
long long unsigned divisions(long long unsigned n, long long unsigned divisor) {
    if (divisor == 1) return -2147483648;
    int number_of_divisions = 0;
    long long unsigned num = n;
    while (num>=divisor) {
        num/=divisor;
        number_of_divisions++;
    }
    return number_of_divisions;
}
//
long long unsigned divisions(long long unsigned n, long long unsigned divisor) {
  long long unsigned i;
  for (i = 0; n / divisor >= 1; i++) {
    n /= divisor;
  }
  return i;
}
