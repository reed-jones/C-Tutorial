#include <stdio.h>

main()
{
  int c, i, j, max;
  int ndigit[10];

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  // count each digit, and store value into array.
  // -0x30 makes each digit equal to binary digit
  // instead of ascii char (0 == 0x30)
  // While were at it, check for largest value (for
  // for tallest bar)
  max = 0;
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
    {
      ++ndigit[c-0x30];
      if (ndigit[c-0x30] > max)
        max = ndigit[c-0x30];
    }

  printf("\n\n");

  // draw histogram. If bar is as tall as [i], draw box,
  // otherwise draw blank
  for (i = max; i > 0; --i)
  {
    for (j = 0; j < 10; ++j)
    {
      if (ndigit[j] >= i)
        printf(" []\t");
      else
        printf("  \t");
    }
    printf("\n");
  }
  // draw labels
  for (i = 0; i < 10; ++i)
    printf("%d(%d)\t", i, ndigit[i]);
  printf("\n");
}
