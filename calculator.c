//LET THE CODE BEGIN
#include <stdio.h>
#include <string.h>
main(void) {
  int count=0, mark=0;
  char input[20];
  
  printf("Welcome to K&A 4-function calculator! \n");
  
  while (mark==0) {
  	printf("Enter First number: \n"); 
  	scanf("%s", &input);
  	while(input[count] != '\0') {
  	  if (isdigit(input[count])==1) {
  		  count++;
  		}
  		if (isdigit(input[count])==0 && (input[count] != '\0')) {
  			printf("Enter Valid input* (Integer) \n");
  			break;
  		}
  	}
  	if (input[count]=='\0') {
  	break;
  	}
  }
  printf("Input Is Integer");
  return 0;
}
