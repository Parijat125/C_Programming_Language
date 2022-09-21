#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  float fahr, celcius;  

  celcius = LOWER;
  printf("Celcius Farh\n");

  while(celcius <= UPPER)
  {
    fahr = (celcius * 9.0/5.0) + 32;
    printf("%3.0f %6.0f\n", celcius, fahr);
    celcius = celcius + STEP;
  }

}
