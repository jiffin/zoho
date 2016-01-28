#include<stdio.h>
int main()
{
  int a,d,n,c=1;
  printf("enter the number\n");
  scanf("%d",&a);
  
  a=n;  
  while(a>1)
  {
    c++;
    a=a/2;
  }
  
  printf("%d count is %d\n",n,c);
  return 0;
}
