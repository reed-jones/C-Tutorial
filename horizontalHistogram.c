#include <stdio.h>

main()
{
  int c, i, j, max, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c-0x30];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  for (i = 0; i < 10; ++i)
  {
    // for each member of array, draw [] [] [] [] to signify digits
    printf("%d:%d = ", i, ndigit[i]);
    for (j = 0, max = ndigit[i]; j < max; ++j)
    {
      printf("[] ");
    }
    printf("\n");
  }

/*  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);*/
}
