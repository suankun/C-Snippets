long odd_count(long n) {
  return n / 2;
}

/*Alternative solution*/

long odd_count(long n) {
  return n % 2 != 0 ? (n - 1) / 2 : n / 2;
}
