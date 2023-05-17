// Задача 1. Напишете програма, в която информацията да бъде съхранявана
// в структура, описваща автомобил. Входната информация трябва бъде
// въведена от потребителя, като напишете меню с въпроси към него.
// Принтирайте въведената информация за описание на автомобила.

#include <stdio.h>

struct Car {
	char brand[20];
	char color[20];
	int mileage;
};

int main()
{
    struct Car bmw = {0};

	// user input, initialize the structure
	printf("Enter the brand: ");
	fgets(bmw.brand, 20, stdin);
	// scanf("%s", bmw.brand);
	printf("Enter the color: ");
	fgets(bmw.color, 20, stdin);
	// scanf("%s", bmw.color);
	printf("Enter the mileage: ");
	scanf("%d", &bmw.mileage);

	// print the data
	printf("Brand: %s, color: %s, mileage: %d\n", bmw.brand, bmw.color, bmw.mileage);
	
    return 0;
}

////////////////

// struct car
// {
//     char brand[30];
//     char color[30];
//     int km;
// };

// int main()
// {
//     struct car first;
//     printf("Enter the brand: ");
//     scanf("%s", &first.brand);
//     printf("Enter the color: ");
//     scanf("%s", &first.color);
//     printf("Enter the km: ");
//     scanf("%d", &first.km);

//     printf("Brand: %s\n", first.brand);
//     printf("Color: %s\n", first.color);
//     printf("km: %d\n", first.km);
    
//     return 0;
// }
