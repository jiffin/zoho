#include <stdio.h>
int main() 
{
  int a[20],n,b,c,i,j;
  printf("enter the size\n");
  scanf("%d",&n);
  printf("enter the numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the number and index\n");
	scanf("%d%d",&b,&c);
  for(i=n-1;i>=ind;i--)
	{
		a[i+1]=a[i];
	}
	a[c]=b;
	printf("the new array is");
	for(i=0;i<=n;i++)
	{
	  printf("%d\n",a[i]);
	 }
	return 0;
}
