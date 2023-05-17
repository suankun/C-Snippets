#include <stdio.h>
#include <stdlib.h>

// key 0 - all
// key 1 - positive
// key 2 - negative


int min(int *a, int n, int key)
{
    int m;
    switch (key)
    {
    case 0:
        m = a[0];
        for (int i = 0; i < n; i++)
            {
                if (a[i] < m)
                {
                    m = a[i];
                }
            }
        return m;
    case 1:
        m = 1000;
        for (int i = 0; i < n; i++)
            {
                if (a[i] > 0 && a[i] < m)
                {
                    m = a[i];
                }
            }
        return m;
    case 2:
        m = 0;
        for (int i = 0; i < n; i++)
            {
                if (a[i] > 0 && a[i] < m)
                {
                    m = a[i];
                }
            }
        return m;
    default:
        printf("*");
        break;

    }
}

int max(int *a, int n, int key)
{
    int m;
    switch (key)
    {
    case 0:
        m = a[0];
        for (int i = 0; i < n; i++)
            {
                if (a[i] > m)
                {
                    m = a[i];
                }
            }
        return m;
    case 1:
        m = 1000;
        for (int i = 0; i < n; i++)
            {
                if (a[i] > 0 && a[i] > m)
                {
                    m = a[i];
                }
            }
        return m;
    case 2:
        m = 0;
        for (int i = 0; i < n; i++)
            {
                if (a[i] > 0 && a[i] > m)
                {
                    m = a[i];
                }
            }
        return m;
    default:
        printf("*");
        break;

    }
    
    return m;
}

int sum(int *a, int n, int key)
{
    int s = 0;
    switch (key)
    {
    case 0: for (int i = 0; i < n; i++) s = s + a[i]; return s;
    case 1: for (int i = 0; i < n; i++) s = s + a[i]; return s;
    case 2: for (int i = 0; i < n; i++) s = s + a[i]; return s;
    }

}

int num(int *a, int n, int key)
{
    switch (key)
    {
    case 0: return n;
    case 1:
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0) count1++;
            return count1;
        }
    case 2:
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0) count2++;
            return count2;
        }
    }
}

void operation(char *op, int *data)
{
    printf("%s", op);
}

int main()
{
    int key;
    char kodOp[5];
    int data[100];

    scanf("%s", kodOp);
    int n = len(kodOp);
    if (n == 4)
    {
        if (kodOp[3] == 'p')
            key = 1;
        if (kodOp[3] == 'n')
            key = 3;
    }
    else
    {
        if (n == 3)
            key = 0;
        else
            printf("Error");
    }

    operation(kodOp);

    return 0;
}