#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int odd(int a);
int even(int b);

int odd(int a)
{
	if (a % 2 != 0)
		printf("%d ", a);
	return 0;
}

int even(int b)
{
	if (b % 2 == 0)
		printf("%d ", b);
	return 0;
}

int main(void)
{
	int arr[5];
	int i;
	printf("Please input five integer: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);


	printf("Odd numbers: ");
	for (i = 0; i < 5; i++)
		odd(arr[i]);
	printf("\n");

	printf("Even unmbers: ");
	for (i = 0; i < 5; i++)
		even(arr[i]);
	
	return 0;
}