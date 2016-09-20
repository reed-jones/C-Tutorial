#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == 0x9)
      printf("\\t");
    else if (c == 0x8) // is this even necessary
      printf("\\b");
    else if (c == 0x92) // or this?
      printf("\\");
    else
      putchar(c);
  }
}
