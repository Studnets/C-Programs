/* 
Alexander Comerford
NENG/TENH 202 Introduction to Computer Programming for Engineers
Project 6
*/

#include <stdio.h> 

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
		
	printf("Enter the two fractions separated by a plus sign. *no spaces "); 
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	/* Both fractions are entered separated by a +. If a space is added 
	between either fraction and the "+" it will return 0/0 */
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	/* arithmetic operation to get the sum */
	
	printf("The Sum is equal to %d/%d\n", result_num, result_denom); 
	/* prints the sum */
	
	return 0;
}


