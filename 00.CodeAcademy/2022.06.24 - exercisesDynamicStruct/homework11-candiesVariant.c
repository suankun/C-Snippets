// Обичате да ядете бонбони, нали. Искате винаги да имате N бонбона в
// себе си. Всеки час можете да си купите по един бонбон, да изядете по един
// бонбон, който имате, или да удвоите всички бонбони. За колко най-малко
// часа може да постигнете това?
// Например:
// Ако N е 1, отговорът би бил 0 (нищо за правене, вече имате 1).
// Ако N е 2, отговорът би бил 1 (бихте могли или да купите нов бонбон, или да
// удвоите тези, които имате).
// Ако N е 7, отговорът би бил 4 (добавяте 1 в първия час, удвоявате двата
// втория, удвоявате четирите третия и изяждате един през четвъртия час).
// Ако N е 19, отговорът би бил 6: добавяте (стават 2), удвоявате (стават 4),
// добавяте (стават 5), удвоявате (стават 10), удвоявате (стават 20), изяждате
// (стават 19).

#include <stdio.h>
#include <stdlib.h>

int bonbon(int N);

/*
hours 0       1       2       3       4        5        6
1 ->  1
2 ->  1     (1+1)2 
7 ->  1     (1+1)2  (2*2)4  (4*2)8  (8-1)7
19->  1     (1+1)2  (2*2)4  (4+1)5  (5*2)10 (10*2)20 (20-1)19
*/

int powOf2(int * rmd ,int n){
    int count =0;
    int m = n;
    while(n>1){
        n/=2;
        
        count++;
    }
    *rmd=m-(int)pow(2,count);
    return count;
}

int countOfHours(int n)
{
    int count = 1;
    int hours = 0;
    int rmd;
    int sss;
    int power = powOf2(&rmd, n);
    int rmdPower=powOf2(&sss, rmd);
    while (count!=n){
        if (rmdPower == power){
            count += 1;
            hours++;
            rmdPower = power+2;
        } else if (n > count*2){
            count*=2;
            power--;
            hours++;
        } else if (count > n) {
            count--;
            hours++;
        } else {
            count++;
            hours++;
        }
        
    }
    return hours;
}

int main()
{
    int n;
    printf("Enter n :" );
    scanf("%d",&n);
    printf("%d\n",countOfHours(n));
    int rmd;
    
    return 0;
}