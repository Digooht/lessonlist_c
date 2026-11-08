#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n,i,min,m;
	scanf("%d", &m);
	scanf("%d", &n);
	min = n;
	for (i = 1;i <= m - 1;i++)
	{
		scanf("%d", &n);
		if (n < min)
		{
			min = n;
		}
	}
	printf("min = %d", min);
	return 0;
}