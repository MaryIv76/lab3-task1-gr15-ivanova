/* Author: Mariya Ivanova */
/* main.c */
/* Сalculation of the total number of a given letter in three
given sentences */
#include <stdio.h>
#include <string.h>

// Counts given letter in a sentence
int countLetterInSentence(char* letter, char* sentence)
{
  int counter = 0;
  int length = strlen(sentence);

  for (int i = 0; i < length; i++)
  {
    if (*letter == sentence[i])
    {
      counter++;
    }
  }

  return counter;
}

int main (int argc, char *argv[])
{
  if (argc != 5)
  {
    printf("The number of arguments must be 5");
    return 1;
  }

  char* letter = argv[1];
  printf("Letter to count: %s\n", letter);
  printf("Given sentences:\n\t%s\n\t%s\n\t%s\n", argv[2], argv[3], argv[4]);

  int counter = 0;
  counter += countLetterInSentence(letter, argv[2]);
  counter += countLetterInSentence(letter, argv[3]);
  counter += countLetterInSentence(letter, argv[4]);

  printf("\nLetter %s: %d time(s)\n", letter, counter);
  
	return 0;
}
