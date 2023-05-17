// 8. Напишете програма, която събира две числа, използвайки указатели.

#include <stdio.h>  

int add(int *pa, int *pb) {
    return *pa + *pb;
}

int main() {  
    int a = 2, b = 3;
    int *pa = &a;
    int *pb = &b;

    printf("%d\n", add(pa, pb));

    return 0; 
}
