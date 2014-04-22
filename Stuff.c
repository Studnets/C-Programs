/* Alexander Comerford Project 12 chp. 7 */

// ADD COMMENTS!

#include <stdio.h>

int main() {
  // Declare Variables Here
  char ch;
  int len;

  // Initialize Length
  len = 0;
  
  // Ask User input
  printf("Type something: ");

  // While the user doesn't enter a newline, increment
  while ((ch = getchar()) != '\n') {
    len++;
  }

  // Print length of word
  printf("%d char long", len);
  
  return 0;
}
