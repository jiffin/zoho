#include<stdio.h>
int sum(int ,int ,int );
int main()
{
    printf("Sum using 3 variables");
    int a,b,c,tot;
    scanf("%d %d %d",&a,&b,&c);
    tot=a+b+c;
    printf("The sum of 3 nos is:%d",tot);


    printf("Sum using array");
    int x[3],sum;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    sum=x[0]+x[1]+x[2];
    printf("The sum of 3 nos is:%d",sum);

    
    printf("Sum using function call");
    int add;
    add=sum(a,b,c);
    printf("The sum of 3 nos is:%d",add);
    
    return 0;
}
int sum(int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}
