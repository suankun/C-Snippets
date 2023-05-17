// 9. Напишете програма, която разменя две числа, използвай указатели.

#include <stdio.h>  

void add(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {  
    int a = 2, b = 3;
    int *pa = &a;
    int *pb = &b;

    printf("%d, %d\n", a, b);
    add(pa, pb);
    printf("%d, %d\n", a, b);

    return 0; 
}