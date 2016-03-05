#include<stdio.h>
int main()
{
	int a[20],n,i,x,f=0,b;
	printf("enter the size of the numbers\n");
	scanf("%d",&n);
	
	printf("enter the number\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the x element\n");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if((a[i]>x) && (a[i]<a[i+1]))
		{
			b=i;
			f=1;
		}
	}
	
	if(f==1)
	{
		printf("%d(index of%d)\n",b,a[b]);
	}
	else
	{
		printf("-1\n");
	}
	return 0;
}
		
