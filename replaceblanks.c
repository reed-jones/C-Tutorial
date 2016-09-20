#include <stdio.h>

main()
{
  int c, prev;
  c = 0;
  prev = 0;
  while ((c = getchar()) != EOF)
  {
    /* Why Does'nt This Work? */
//    if (prev != 0x20 && c != 0x20)
    if (!((prev == 0x20) && (c == 0x20)))
    {
      putchar(c);
    }

        
    prev = c;
  }  
}
