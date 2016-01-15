#include<stdio.h>
#include<unistd.h>

int main()
{
  int n;
  char string[]={"WISH YOU A HAPPY PONGAL"};
  
  for(n=0;string[n]!='\0';n++)
  {
    printf("%c ",string[n]);
    sleep(50);
  }
  return 0;
}
