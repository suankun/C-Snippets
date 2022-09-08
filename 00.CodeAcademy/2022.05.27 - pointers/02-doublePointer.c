#include <stdio.h>

int main()
{
	int x = 5; // x е променлива
	int *ptr = &x; // ptr e променлива, която е указател към x
	int **p = &ptr; // p e указател към указателя ptr
	// Понеже ptr e указател към int => p ще е двоен указател към int, int **p;
	printf("%d", *ptr); // ще изведе стойността на целочислената променлива x
	printf("\n");
	printf("%d", **p); // прави същото
	printf("\n");
	printf("%d", *p); // извежда адреса на клетката, където е записан указателя ptr
	printf("\n");
	return 0;
}