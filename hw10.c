#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	char name[20];
	char country[20];
	int population;
} Point;

void ShowPersonInfo(Point* man)
{
	printf("Name> %s \n", man->name);
	printf("Country> %s \n", man->country);
	printf("Population> %d \n", man->population);
}

int main(void)
{
	Point arr[3];
	int i;
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); scanf_s("%s", arr[i].name);
		printf("Country> "); scanf_s("%s", arr[i].country);
		printf("Population> "); scanf_s("%d", &arr[i].population);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people",i+1,arr[i].name,arr[i].country,&arr[i].population);
		printf("\n");
	}

	return 0;
}