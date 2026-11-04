#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n>=90&&n<=100)
	{
		printf("A");
	}
	else if (n >= 80)
	{
		printf("B");
	}
	else if (n >= 70)
	{
		printf("C");
	}
	else if (n >= 60)
	{
		printf("D");
	}
	else if(n>=0&&n<60)
	{
		printf("E");
	}
	else {

	}
	return 0;
}