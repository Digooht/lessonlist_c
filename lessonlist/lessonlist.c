#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i,m;

int prime(int m);

int main()
{
	while (prime(m))
	{
		print("%6d",m);
		print("%d", i);
		i++;

	}
	return 0;
}

int prime(int m)
{
	for (i = 2;i <= m - 1;i++)
	{
		if (m% i == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}