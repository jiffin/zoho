#include<stdio.h>
#include<unistd.h>

int main()
{
  int n;
  char string[]="WISH YOU A HAPPY PONGAL":
  
  for(n=0;string[n]!='\0';n++)
  {
    sleep(150);
    printf("%c ",string[n]);
  }
  return 0;
}
