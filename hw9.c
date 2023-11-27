#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return 0;
}
int main(void)
{
	char str[50];
	int len, i;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if ('A' <= str[i] && str[i] < 'z')
			str[i] = convCase(str[i]);
	printf("Output> %s", str);
}