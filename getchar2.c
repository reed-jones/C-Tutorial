#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
  printf("\nc = %i\n", c);
}
