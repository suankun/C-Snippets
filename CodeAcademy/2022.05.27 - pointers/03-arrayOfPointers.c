#include <stdio.h>

int main()
{
	int *arr_ptr[3]; // декларира масив от 3 указателя
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	arr_ptr[0] = &a[0]; // може да се инициализира по два начина: 1. а, 2. &a[0]
	int b[5] = {10 ,20, 30,40, 50};
	arr_ptr[1] = b;
	int c[3] = {18, 36, 54};
	arr_ptr[2] = c;
	
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", arr_ptr[0][i]); // принтира масива "a"
	}
	printf("\n");

	printf("%d", arr_ptr[1][3]); // връща четвъртата стойсност от масива "b"
	printf("\n");

	return 0;
}