// Задача17. Да се напише програма, която въвежда едно цяло положително число n и намира и
// извежда сумата на всички числа от 1 до n

#include <stdio.h>

int main() {
	int n = 0, sum = 0;
	scanf("%d", &n);
	for (size_t i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);

    return 0;
}