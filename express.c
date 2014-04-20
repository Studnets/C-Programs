/*Alexander Comerford*/
#include <stdio.h>
#define N 10


int main(Void)
{
	char ch1, ch2, ch3;
	float num1, num2, num3;
	printf("Enter an expression: ");
	scanf("%i%c%i%c%i", &num1, &ch1, &num2, &ch2, &num3, &ch3);
	if (ch1 == '+')
		num1=num1+num2;
	if (ch1 == '-')
		num1=num1-num2;
	if (ch1 == '*');
		num1=num1*num2;
	if (ch1 == '/') {
		if (num2 == 0 || num3 == 0) {
			printf("divide by zero occurred.\n");
			}
		else if (num2 == 0 || num3 == 0) {
			num1=num1/num2;
			}
	}
	if (ch2 == '+')
		num1=num1+num3;
	if (ch2 == '-')
		num1=num1-num3;
	if (ch2 == '*')
		num1=num1*num3;
	if (ch2 == '/')
		num1=num1/num3;
	

	
	printf("value of expression is: %.1f\n", num1);
	
	return 0;
}
