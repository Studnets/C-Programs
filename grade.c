//Alexander Comerford grade converter

#include <stdio.h>

int main(void)
{
	int gradea, gradeb, gradec;
	
	printf("Type a number grade 000-100. *Format example: 056  >");
	scanf("%1d%1d%1d", &gradea, &gradeb, &gradec);
		
	switch (gradea) {
		case 1:
			if (gradeb != 0)
				printf("Error: Invalid Grade");
			else if (gradec != 0)
				printf("Error: Invalid Grade");
			else if (gradeb == 0 && gradec == 0)
				printf("Grade: A");
			break; 
		case 0:
			switch (gradeb) {
				case 9:
					printf("Grade: A");
					break;
				case 8:
					printf("Grade: B");
					break;
				case 7:
					printf("Grade: C");
					break;
				case 6:
					printf("Grade: D");
					break;
				default:
					if (0 <= gradeb <= 5)
						printf("Grade: F");
					else if (gradeb)
						printf("Error: Invalid Grade");
					break;
			}
			break;
		default:
			printf("Error: Invalid Grade");
			break;
	}
	return 0;
}