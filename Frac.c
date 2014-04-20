//Alexander Comerford
//Fraction in lowest terms

#include <stdio.h>

int main(void) {
	int top, bot, count, dtop, denom;
	
	printf("Enter fraction: (*Format example: 1/2)   >");
	scanf("%d/%d", &top, &bot);
	
	count = 2;
	while (count < top) {
		if top%count && bot%count == 0
			top = top/count;
			bot = bot/count;
			count = 2;
		else if top%count && bot%count != 0
			count++;
	
	}