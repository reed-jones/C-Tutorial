#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == 0xA)
      ++nl;
    if (c == 0x20 || c == 0xA || c == 0x9)
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
