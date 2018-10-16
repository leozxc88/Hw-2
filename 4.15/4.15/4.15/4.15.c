#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	c = 5000;
	d = 0.1;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 15; b++)
		{
			c = c + d * c;
		}
		e = d * 100;
		printf("%.1f---%.3f\n",e,c);
		c = 5000;
		d = d + 0.005;
	}

	system("pause");
	return 0;
}