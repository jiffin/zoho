#include <stdio.h>
int main()
{ 
	int a[50],n,m,tot;
	int begin,end,i,j,k;
	
	printf("Enter the total size of element to be entered:\n ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	
	for(tot=1;tot<=n;tot++)
	{
	  	m=n-tot;
		for(begin=0;begin<=m;begin++)
		{
			
			if(tot!=1)
			{
				end=begin+tot-1;
				for(j=end;j<n;j++)
				{
					for(i=begin;i<end;i++)
					{
					printf("%d",a[i]);
					}
				printf("%d\n",a[j]);
				}
			}
			else
			{
			printf("%d\n",a[begin]);
			}
		}	
	}
return 0;
}
