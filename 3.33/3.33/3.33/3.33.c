#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b,c,d;
	printf("Enter the lenth:");
	scanf_s("%d", &a);
	printf("Enter the breadth:");
	scanf_s("%d", &b);
	for (c = 1; c <= a; c++)
	{
		for (d = 1; d <= b; d++)
		{
			if (c == 1 || c == a || d == 1 || d ==b)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}