#include<stdio.h>
int main()
{
  int n,r,s=0,a;
  printf("enter the number");
  scanf("%d",&n);
  
  a=n;
  while(n>0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  printf("%d reverse is %d",a,s);
  return 0;
}
  
