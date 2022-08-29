// Напишете програма, която при дадена редица изтрива всички числа, които
// се срещат нечетен брой пъти. За целта използвайте функция.
// Пример:
// array = {4, 2, 2, 5, 2, 3, 2, 3, 1, 5, 2}
// {5, 3, 3, 5}

#include <stdio.h>  
#include <conio.h>  

void deleteElement(int *arr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j+1];
            }
            size--;
            i--; // checks numbers on consecutive indexes
        }
    }
}

void countFrequency(int *arr, int size)    
{    
     //Array fr will store frequencies of element    
    int fr[size];
    int visited = -1;
    int newSize = size;
        
    for (int i = 0; i < newSize; i++)
    {
        int count = 1;
        for (int j = i+1; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                //To avoid counting same element again    
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
    }
      
    for (int i = 0; i < newSize; i++)
    {
        if (fr[i] != visited)
        {    
            printf("    %d", arr[i]);
            printf("    |  ");
            printf("  %d\n", fr[i]);
        }    
    }
}

int main()
{
    int a[] = {4, 2, 2, 5, 2, 3, 2, 3, 1, 5, 2};
    int i, j, num, size = 11;
    
    printf("Elements in array are:\n");
    for (i = 0;i < size; i++)
    printf("%d ",a[i]);
    printf("\n");

    countFrequency(a, size);
    
    //Print Output
    printf("Final Output: \n");
    for(i = 0;i < size; i++)
        printf("%d ",a[i]);

    printf("\n");
 
    return 0;
}