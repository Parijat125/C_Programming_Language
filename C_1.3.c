#include<stdio.h>

int main(){
  
  float fahr, celcius;
  int lower, upper, steps;

  lower = 0;
  upper = 300;
  steps = 20;

  fahr = lower;
  printf("Celsius Fahr\n");
  while(fahr <= upper)
  {
    celcius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr = fahr + steps; 
  }

}
