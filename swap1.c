#include<stdio.h>
int main()
{
  int a[20],c,i,n,t,b;
  
  printf("enter the size\n");
  scanf("%d",&n);
  printf("enter the numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
	if(n%2==0)
	{
    c=n/2;
		b=c;
	}
	else
	{
		c=n/2;
		b=c+1;
	} 

 	for(i=0;i<c;i++)
	{
		t=a[i];
		a[i]=a[b+i];
		a[b+i]=t;
	}
	printf("result\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
