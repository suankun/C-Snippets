// https://www.codewars.com/kata/6409aa6df4a0b773ce29cc3d/train/c
unsigned real_numbers(unsigned n) {
  return n - (n / 2 + n / 3 + n / 5 - n / 6 - n / 10 - n / 15 + n / 30);
}
