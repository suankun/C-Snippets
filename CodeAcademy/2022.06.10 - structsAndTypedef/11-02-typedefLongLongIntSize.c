// Задача 2. Създайте нов потребителски тип към тип long long int. Използвайте го
// във функцията printf, отпечатайте размера.

#include <stdio.h>

typedef long long int long_t;

int main()
{
    printf("%lld\n", sizeof(long_t));

    return 0;
}

///////////////////////////////

// typedef long long int lli;

// int main()
// {
    
//     printf("%d\n", sizeof(lli));

//     return 0;
// }