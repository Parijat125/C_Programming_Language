#include<stdio.h>

int main()
{
  float fahr, celcius;
  int lower, upper, step;


  lower = 0;
  step = 20;
  upper = 300;

  celcius = lower;
  printf("Celcius Farh\n");

  while(celcius <= upper)
  {
    fahr = (celcius * 9.0/5.0) + 32;
    printf("%3.0f %6.0f\n", celcius, fahr);
    celcius = celcius + step;
  }

}
