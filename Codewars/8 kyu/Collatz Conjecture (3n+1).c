// https://www.codewars.com/kata/577a6e90d48e51c55e000217/train/c
unsigned hotpo(unsigned n) {
    if(n == 0) return 0;
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3*n + 1;
        count++;
    }
    return count;
}
