#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while (1)
	{
		int a, b, c, e;
		printf("Enter two sides of triangle:");
		scanf_s("%d %d", &a, &b);
		printf("Enter  of triangle:");
		scanf_s("%d", &c);
		if (c>500)
		{
			printf("error");
		}
		else
		{
			if (c*c == a * a + b * b)
			{
				printf("it is right triangle\n");
			}
			else
			{
				printf("it is not right triangle\n");
			}
		}
		printf("\n");
	}
 	system("pause");
	return 0;
}