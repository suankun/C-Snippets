// Задача 4. Дефинирайте тип указател към функция, която изпълнява определена
// операция върху две целочислени променливи. Дефинирайте функции, които
// изпълняват операциите +, --, *, /. Използвайте новия тип, за да извикате всяка една
// от функциите.

#include <stdio.h>

typedef int (*Ptr) (int, int);

int sum(int x, int y)
{
    return x + y;
}

int difference(int x, int y)
{
    return x - y;
}

Ptr (Convert(const char code)) 
{
    if (code == '+') return &sum;
    if (code == '-') return &difference;
}

int main()
{
    Ptr ptr;
    ptr = Convert('+');
    printf("%d\n", ptr(4, 2));
    ptr = Convert('-');
    printf("%d\n", ptr(4, 2));

    return 0;
}
