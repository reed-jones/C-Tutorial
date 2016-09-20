#include <stdio.h>

main()
{
  int c, spaces, tabs, newlines;

  c = 0;
  spaces = 0;
  tabs = 0;
  newlines = 0;
    
  while ((c = getchar()) != EOF)
  {
    if (c == 0xa)
      ++newlines;
    if (c == 9)
      ++tabs;
    if (c == 0x20)
      ++spaces;
  }
  printf("\nnewlines: %d\n", newlines);
  printf("tabs:     %d\n", tabs);
  printf("spaces:   %d\n", spaces);
}
