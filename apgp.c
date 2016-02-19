#include<stdio.h>
int main()
{
	int s,d,i=0,n,ch;
	printf("enter the no of term\n");
	scanf("%d",&n);
	printf("enter the start\n");
	scanf("%d",&s);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter your choice\n1.ap\n2.gp\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("AP\n");
			for(i=1;i<=num;i++)
			{
				printf("%d\t",s);
				s=s+diff;	
			}
			break;
		case 2:
			printf("GP\n");
			for(i=1;i<=num;i++)
			{
				printf("%d\t",s);
				s=s*diff;
			}
			break;
		default:
      		printf("Please Enter Method 1 or 2");
	}
return 0;
}
