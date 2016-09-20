#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == 0x20 || c == 0xA || c == 0x9)
      printf("\n");
    else
    {
      putchar(c);
    }
  }
}
