/* 
Alexander Comerford
NENG/TENH 202 Introduction to Computer Programming for Engineers
Project 4
*/

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
	first_sum, second_sum, total;
	/* list of variables */
	
	printf("Enter the 11 digits: ");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,", 
	&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	/* 11 digits in order assigned to each variable */
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	/* equations related to each variable to calculate total */
	
	printf("The check digit is %d\n", 9 - ((total - 1) % 10));
	/* final equation in prinf function to calculate check digit */
	
	return 0;
}