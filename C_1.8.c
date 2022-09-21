#include<stdio.h>

int main()
{
  int tabs, newLine, blanks;
  int c;
  tabs = 0;
  newLine = 0;
  blanks = 0;
  while((c = getchar())  != EOF)
  {
    if(c == '\n')
    {
      ++newLine;
    }if(c == '\t'){
      ++tabs;
    }else if(c == ''){
      ++blanks;
    }

    printf("%d %d %d\n", tabs, newLine, blanks); 
  }
}
