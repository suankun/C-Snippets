#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char firstName[30];
    char lastName[40];
    float salary;
    int exp;
} employee;

int main()
{
    employee emp;
    FILE *fptr;
    FILE *in_fptr;

    in_fptr = fopen("in.txt", "r");
    fptr = fopen("team.bin", "wb");

    if (fptr == NULL || in_fptr == NULL)
    {
        printf("Cannot open file!");
        return 1;
    }

    while (fscanf(in_fptr, "%s %s %f %d", emp.firstName, emp.lastName, &emp.salary, &emp.exp) > 0)
    {
        fwrite(&emp, sizeof(employee), 1, fptr);
    }

    fclose(in_fptr);
    fclose(fptr);

    in_fptr = fopen("out.txt", "w");
    fptr = fopen("team.bin", "rb");

    if (fptr == NULL || in_fptr == NULL)
    {
        printf("Cannot open file!");
        return 1;
    }

    for (int n = 0; n < 3; n++)
    {
        fread(&emp, sizeof(employee), 1, fptr);
        fprintf(in_fptr, "%s %s %f %d\n", emp.firstName, emp.lastName, emp.salary, emp.exp);
    }

    fclose(in_fptr);
    fclose(fptr);

    return 0;

}