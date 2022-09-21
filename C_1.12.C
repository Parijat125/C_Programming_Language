#include<stdio.h>
#define IN 1
#define OUT 2

int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while((c = getchar()) != EOF)
  {
    if(c == '\n' || c == '\t' || c == ' ')
    {
      if(state = IN)
      {
        putchar('\n');
	state = OUT;
      }
    }else if(state == OUT){
      state = IN;
      putchar(c);
    }else{
      putchar(c);
    }
  }
}
