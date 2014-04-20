//Alexander Comerford, Computer programming 

#include <stdio.h>

int main(void)
{
	int m, d, y, ma, da, ya;
	
	printf("This program will find the earliest of two entered dates \n");
	printf("Enter first date. Format* (mm/dd/yy)    >");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Enter second date. Format* (mm/dd/yy)   >");
	scanf("%d/%d/%d", &ma, &da, &ya);

	
	if (y < ya)
		printf("%d/%d/%d is earlier than %d/%d/%d", m, d, y, ma, da, ya);
	else if (ya < y)
		printf("%d/%d/%d is earlier than %d/%d/%d", ma, da, ya, m, d, y);
	else if (y == ya)
		if (m < ma)
			printf("%d/%d/%d is earlier than %d/%d/%d", m, d, y, ma, da, ya);
		else if (ma < m)
			printf("%d/%d/%d is earlier than %d/%d/%d", ma, da, ya, m, d, y);
		else if (m == ma)
			if (d < da)
				printf("%d/%d/%d is earlier than %d/%d/%d", m, d, y, ma, da, ya);
			else if (da < d)
				printf("%d/%d/%d is earlier than %d/%d/%d", ma, da, ya, m, d, y);
			else if (d == da)
				printf("%d/%d/%d is the same as %d/%d/%d", ma, da, ya, m, d, y);

	return 0;
}
	
	
	
	
	
	