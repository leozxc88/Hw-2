#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c=10;
	for (a = 1; a <= c; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	/*---------------------------------*/
	int i, j, k = 10;
	for (i = 1; i <= k; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	/*---------------------------------*/
	int m, n, o = 10;
	for (m = 10; m >= 0; m--)
	{
		for (n = 10; n > 0; n--)
		{
			if (n > m)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	/*---------------------------------*/
	int e, f, g = 10;
	for (e = 0; e <=g; e++)
	{
		for (f = 10; f >0; f--)
		{
			if (f > e)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");
	/*---------------------------------*/
	system("pause");
	return 0;
}