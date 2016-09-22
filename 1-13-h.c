#include <stdio.h>

#define MAX 10

main()
{
  int wordCount, letterCount, i, c;
  int lengths[MAX];

  for (i = 0; i < MAX; i++)
    lengths[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c != ' ' && c != '\n' && c != '\t')
    {
      letterCount++;
    }
    else
    {
      lengths[letterCount]++;
      letterCount = 0;
    }
  }

  for (i = 0; i < MAX; i++)
      printf("%d = %d\n", i, lengths[i]);
}
