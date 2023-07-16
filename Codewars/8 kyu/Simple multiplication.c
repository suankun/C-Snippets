// https://www.codewars.com/kata/583710ccaa6717322c000105/train/c
int simple_multiplication(int number) {
    return number % 2 == 0 ? number * 8 : number * 9;
}
//
int simple_multiplication(int a) {
    return a * (a % 2 == 0 ? 8 : 9);
}
