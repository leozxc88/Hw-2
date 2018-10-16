#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c=5, d=5,e=1;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a <= 5)
			{
				if (b >= c && b <= d)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				if (b > c && b < d)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
		if (a <= 5)
		{
			c--;
			d++;
		}
		else
		{
			c++;
			d--;
		}
		if (a == 5 && e == 1)
		{
			c++;
			d--;
			e--;
		}
	}

	system("pause");
	return 0;
}