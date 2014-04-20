/* C-Programs */

/*
 __      __   _                          
 \ \    / /__| |__ ___ _ __  ___         
  \ \/\/ / -_) / _/ _ \ '  \/ -_)        
   \_/\_/\___|_\__\___/_|_|_\___|        
   /_\ | |_____ ____ _ _ _  __| |___ _ _ 
  / _ \| / -_) \ / _` | ' \/ _` / -_) '_|
 /_/ \_\_\___/_\_\__,_|_||_\__,_\___|_|  

 */
 
 /*
 ****************************
 ******** Important *********
 ****************************
 
 -Tutorial on how to run workshop
 
 1. Only change comments below ****PROGRAMS BELOW HERE**** line
 
 2. When changing comments make sure it is ONE PROGRAM AT A TIME.
	More than one program can induce errors in either program.
 
 3. Reference to syntax and description of C-Programming in 
	shorthand notes below this tutorial. 
	-For additional reference.
		-http://cm.bell-labs.com/cm/cs/who/dmr/ctut.pdf
		-http://www.cs.umanitoba.ca/~eclipse/7-EclipseCDT.pdf
 */
 
 /*
 C-Programming shorthand notes
 
 */
 
 
 
 /* ******TO BE WORKED ON LATER PROGRAAMS BELOW **********/
 
 //percentage commision
 
 /*
 #include <stdio.h>
 
 int main(void)
 {
	float com, val;
	
	printf("Enter value of trade: ");
	scanf("%f", &val);
	
	if (val < 2500.00f)
		com = 30.00f + 0.17f * val;
	else if (val < 6250.00f)
		com = 56.00f + 0.0066f * val;
	else if (val < 20000.00f)
		com = 76.00f + 0.0034f * val;
	else if (val < 50000.00f)
		com = 100.00f + 0.0022f * val;
	else if (val < 500000.00f)
		com = 155.00f + 0.0011f * val;
	else
		com = 255.00f + 0.0009f * val;
	if 
		(com < 39.00f);
		com = 39.00f;
	
	printf("Commission: $%f\n", com);
	
	return 0;
}
*/


//grades

/*
#include <stdio.h>

int main(void)
{
	int grade; //define variable
	printf("Enter a valid integer graded") //simple print
	scanf("%d", &grade); //gets input (number) and sets it to variable grade
	
	switch (grade) {
		case 4: printf("Excellent");
				break;
		case 3: printf("Excellent");
				break;
		case 2: printf("Excellent");
				break;
		case 1: printf("Excellent");
				break;
		case 0: printf("Excellent");
				break;
	}	
	return 0;
}
*/

//squares

/*
#include <stdio.h>

int main(void)
{
	int i, n;
	
	printf("Enter a number and i will give you all the squares below that number: \n");
	scanf("%d", &n);
	
	i = 1;
	while (i < n)
	{
	printf("%10d%10d\n", i, i * i);
	i++;
	}
	return 0;
}
*/

//sum

/*
#include <stdio.h>
 
int main(void)
{
	int d, count, n, sum;
	
	printf("How many numbers are we going to sum?\n");
	scanf("%d", &d);
	
	count = 0;
	sum = 0;
	while (count < d)
	{
		count = count + 1;
		printf("Number %d\n", count);
		scanf("%d", &n);
		
		sum = sum + n;
	}
	printf("The sum is equal to %d", sum);
	
	return 0;
}
*/

//seperation of digits

#include <stdio.h> 

int main(void)
{
	int i, j, length;
	
	printf("Enter a 4 digit integer and i'll separate its digits");
	scanf("%d", &i)
	
	j = 1000;
	do{
	
	printf("%d ", i/j);
	i = i-(i/j) * j; j/=10;
	
	}
	
	while(i>0);
	
	
	return 0;
}





	
	
	
				
				