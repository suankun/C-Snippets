#include <stdio.h>

int main()
{
	int N, m;
    int i;
    int monkey = 0;
    int P1, P2, P3;

    printf("Enter the number of the Pirates: ");
    scanf("%d", &N);
    printf("Enter the number of the Coconut in the morning: ");
    scanf("%d", &m);

    m /= 3;
	
    for(i = 0; i < N; i++)
    {
        m = m * 2 + 1;
    }

    printf("%d\n", m);

	return 0;
}