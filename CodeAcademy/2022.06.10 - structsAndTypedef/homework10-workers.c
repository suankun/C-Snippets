// Задача 10*. Представете служителите
// във фирма в структура с членове: пореден номер, име, презиме,
// фамилия, позиция, трудов стаж в години, заплата в лева, указател към
// структурата, описващ неговия началник. Напишете програма, която
// въвежда 10 служителя, които се съхраняват в масив от описаните
// структури. Въвеждането на служителите може да стане на два паса,
// първо въвеждане на всички данни без указателя към началника и на
// втори пас, указване на всеки служител кой е неговият началник.

#include <stdio.h>

struct persons
{
    int id;
    char firstName[20];
    char secondName[20];
    char familyName[20];
    char occupation[20];
    int experience;
    float salary;
    struct persons *manager;
};

int main()
{
    struct persons employees[] = {
        {1, "Angel",    "Angelov",   "Angelov",   "Programmer", 5, 2000},
        {2, "Boris",    "Borisov",   "Borisov",   "Manager",    5, 2000},
        {3, "Valeri",   "Valeriev",  "Valeriev",  "Programmer", 5, 2000},
        {4, "Georgi",   "Georgiev",  "Georgiev",  "Programmer", 5, 2000},
        {5, "Daniel",   "Danielov",  "Danielov",  "Programmer", 5, 2000},
        {6, "Eftim",    "Eftimov",   "Eftimov",   "Programmer", 5, 2000},
        {7, "Jelyasko", "Jelyaskov", "Jelyaskov", "Programmer", 5, 2000},
        {8, "Zlatan",   "Zlatanov",  "Zlatanov",  "Programmer", 5, 2000},
        {9, "Ignat",    "Ignatov",   "Ignatov",   "Programmer", 5, 2000},
        {10, "Yordan",  "Yordanov",  "Yordanov",  "Programmer", 5, 2000},
    };

    employees[0].manager = &employees[1];

    return 0;
}
