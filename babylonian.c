#include<stdio.h>
int main()
{
	int n;
	float d,min=1,accuracy=0.0001,a;
	printf("Enter the number");
	scanf("%d",&n);
    d=n;
    a=d-min;
    
	while(a>accuracy)
	{
		d=(d+min)/2;
		min= n/d;
		a=d-min;
	}
	printf("\nSquare Root is %f",d);
	return 0;
}
