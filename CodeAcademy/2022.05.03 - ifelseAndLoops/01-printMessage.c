int main()
{
	int num = 0;
	do
	{
		printf("Enter number between 1 and 3: ");
		scanf("%d", &num);
	} while (num <= 1 || num >= 3);

	if (num == 1) printf("Hello\n");
	else if (num == 2) printf("Poem\n");
	else if (num == 3) printf("hidden message\n");

	return 0;
}