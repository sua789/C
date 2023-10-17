#include <stdio.h>

int binary(int n);


int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	binary(num);

	return 0;
}

int binary(int n)
{
	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		binary(n / 2);
		printf("%d", n % 2);
	}
	return 0;