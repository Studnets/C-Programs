/* Alexander Comerford Project 12 chp. 7 */

// ADD COMMENTS!

#include <stdio.h>

int main(void) {

  char ch;
  int len;

//  len = 0-1;
  len = 0;
  printf("Type something: ");

  while (ch != '\n') {
    len++;
    ch = getchar();
  }

  printf("%d char long", len);
  return 0;

}
