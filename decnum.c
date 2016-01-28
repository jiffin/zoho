#include<stdio.h>
int main()
{
  int a,d,n,c=0;
  printf("enter the number\n");
  scanf("%d",&a);
  
  a=n;  
  while(a>0)
  {
    d=a%2;
    c++;
    a=a/2;
  }
  
  printf("%d count is %d\n",n,c);
  return 0;
}
