#include <stdio.h>
#define TOGGLE(PIN,N) (PIN ^=  (1<<N))

int main(){
unsigned char val = 0x11;
unsigned char bit = 2;
printf("val = %X\n",val);
//TOGGLE bit number 2
TOGGLE(val, bit);
printf("After toggle bit %d first  time, val = %X\n", bit, val);
//TOGGLE bit number 2 again
TOGGLE(val, bit);
printf("After toggle bit %d second time, val = %X\n", bit, val);
return 0;
}
