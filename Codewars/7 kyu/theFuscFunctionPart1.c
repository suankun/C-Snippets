int fusc(int n) {
    if (n == 0 || n == 1) return n;
		if (n % 2 == 0) return fusc(n / 2);
		return fusc((n-1) / 2) + fusc((n+1) / 2);
}

// Alternative solution:
int fusc(int n) {
  return n < 2 ? n : fusc(n / 2) + fusc(n % 2 ? n / 2 + 1 : 0);
}
