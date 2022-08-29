#include<stdio.h>

void tabul( float (*f)(float), float x[], float y[] , int count, float step)
{
	for(int i = 0; i < count; i++)
	{
		x[i] = i * step;
		y[i] = (*f)(x[i]);
	}
}

float f1(float x)
{
	return x * x + 2;
}

float f2(float x)
{
	return x * x - 1;
}

int main()
{
	float x[5], y[5];

	tabul(f1, x, y, 5, 2);
	for (int i = 0; i < 5; i++)
	{
		printf("x[%d]=%.2f\t y[%d]=%.2f\n", i, x[i],i,y[i]);
	}
	printf("\n\n");

	tabul(f2, x, y, 5, 3);
	for (int i=0; i<5;i++)
	{
		printf("x[%d]=%.2f\t y[%d]=%.2f\n", i, x[i],i,y[i]);
	}
	
	return 0;
}