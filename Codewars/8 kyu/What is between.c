// https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/c
//  assign function results to provided array

void between(int a, int b, int *integers) {
    int index = 0;
    for (int i = a; i <= b; i++) {
        integers[index] = i;
        index++;
    }
}
//
void between(int a, int b, int *integers) {
    while(a <= b) {
        *integers++ = a++;
    }
}
