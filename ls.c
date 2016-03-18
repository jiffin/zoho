#include <stdio.h>
int divide(int s,int n)
{
   int i;
   for(i=0;i<s;i++)
   {
       n=n/10;
   }
   return n;
   
}
int multiply(int s,int n)
{
    int i;
    for(i=0;i<s;i++)
    {
        n=n*10;
    }
    return n;
    
}

int main()
{
    int n,a,count=0,s,b,c,r,d,m;
    printf("enter the number\n");
    scanf("%d",&num);
    a=n;
    while(a>0)
    {
        count++;
        a=a/10;
    }
    s=count/2;
    b=divide(s,n);
    c=n-multiply(s,b);
    if(count%2==0)
    {
        res=multiply(s,c)+b;
        printf("%d",res);
    }
    else
    {
        m=b/10;
        d=b%10;
        res=multiply(s+1,c)+multiply(s,d)+m;
        printf("%d",res);
        
     }
}
