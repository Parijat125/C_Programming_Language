 #include<stdio.h>

int main()
{
  long nc; //longs are at least 32 bits.

  nc = 0;
  while(getchar() != EOF)
  {
    ++nc;
    printf("%ld\n", nc);
  }


  //can also use a for loop
  callForLoop();

}


void callForLoop()
{
  double nc;
  for(nc = 0; getchar() != EOF; nc++)
	  ;
  printf("%.0f\n", nc);
}

