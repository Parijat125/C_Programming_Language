#include<stdio.h>

int main()
{
  int c;

  while((c = getchar()) != EOF)
  {
    if(c == '\b')
    {
      prinft("\\b")
    }if(c == '\t'){
      printf("\\t");
    }if(c == '\\'){
      print("\\");
    }if(c != '\b'){
      if(c != '\t'){
        if(c != '\\'){
	  putchar(c);
	}
      }
    }
  
  }
}
