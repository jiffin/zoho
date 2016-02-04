#include <stdio.h>
int main(void)
{
    int n,i;
    printf("The number:");
    scanf("%d",&n);
    n++;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            n++;
            i=2;
        }
    }
    printf("\n%d",n);
	return 0;
}
