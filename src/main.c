/* Author: Mariya Ivanova */
/* main.c */
/* Сalculation of the total number of a given letter in three
given sentences */
#include <stdio.h>

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
  
	return 0;
}
