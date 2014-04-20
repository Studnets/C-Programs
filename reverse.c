/*Alexander Comerford*/

#include <stdio.h>
#define N 100

//define N 100 for 100 char long MAX

int main(void)
{
	char a[N], ch, termChar;
	int i = 0, count =0, j = 0, k, start = 0, fin, word;
	/*Identifies array, ch as each individual char, termchar as the terminating
	character*/
	/*i is array counter, count is to find sentence length, k is reverse array 
	counter, start is start counter for each word, fin is finish of each word, word 
	is the length of each word.*/
	
	printf ("Enter a sentence.(WITH PUNCTUATION): ");
	while (ch = getchar()) {
		a[i++] = ch;
		count++;
		if (ch == '.' || ch == '!' || ch == '?') {
			termChar = ch;
			break;
		}
	}
	
	a[i] = '\0';
	fin = count - 2;
	word = fin;
	//a[i] clears word array 
	//fin is word length
	printf("Reversal of sentence : ");
	for (k = fin; k >= 0; k--) {
		while(word>=0 && a[word]!=' ')
			word--;
		if(word<=0) {
			printf("%c",' ');
			word=0;
	}
	//gets words in reverse by counting backwards for each word
		for (start = word; start <= fin; start++)
			printf("%c", a[start]);
		word--;
		fin = word;
		k=fin;
	}
	//flips entire sentence
	printf("%c\n",termChar);
	return 0;
}