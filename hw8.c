#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void)
{
	float arr[5];
	int i;
	double sum = 0.0, mean = 0.0, num = 0.0, result;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
		scanf("%f", &arr[i]);
	for (i = 0; i < 5; i++)
		sum += arr[i];
	mean = sum / 5;
	for (i = 0; i < 5; i++)
		num += pow(arr[i]- mean, 2);
	num = num / 5;
	result = sqrt(num);
	printf("Standard Deviation =%f",result);
}