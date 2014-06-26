//LET THE CODE BEGIN
#include <stdio.h>
main() {
  //functions here
  int mark=1;
  char input[count];
  
  printf("Welcome to K&A 4-function calculator!");
  
  while (mark > 0) {
    scanf("Enter a number: %d", &input[count]);
    fgets(input, sizeof(input), stdin);  //Input, memory size, reads input
    for (count = 0; count < strlen(input); ++count)
    {
      if (!isdigit(input[count]))
      {
          mark = 0;
          break;
      }
      else
        printf("Invalid input!");
    }
  }
  
  return 0;
}
