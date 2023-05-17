// Задача 20 Да се напише програма, която намира произведението на всички нечетни числа, които са
// по малки от n. Числото n се задава на вход.

#include <stdio.h>

int main()
{
    int i;
	int num;
	double p = 1;

	printf("Enter a num: ");
	scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
			p *= i;
    }

	printf("%.2lf\n", p);

    return 0;
}

// int main()
// {
//     int n = 0, sum = 1;
//     scanf("%d", &n);
//     for (size_t i = 0; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum *= i;
//         }
//     }
//     printf("%d\n", sum);
    
//     return 0;
// }