#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  printf("Fahrenheit\tCelsius\n");

  while (fahr >= lower)
  {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
  fahr = upper;
  printf("\nCelsius\t\tFahrenheit\n");
  while (fahr >= lower)
  {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%6.1f\t\t%3.0f\n", celsius, celsius * (9.0/5.0) + 32);
    fahr = fahr - step;
  }
}
