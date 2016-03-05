#include<stdio.h>
int main()
{
	int n=0,count[10]={0},i,d,c=0;
	char str[10];

	printf("enter the string\n");
	scanf("%s",str);

	while(str[n]!='\0') //string length
	{
		n++;
	}
	
	for(i=0;i<n;i++)
	{
		if(((str[i]<='Z')&&(str[i]>='A'))||((str[i]>='a')&&(str[i]<='z')))
		{
			if((str[i]<='Z')&&(str[i]>='A'))
			{
				d=str[i]-'A';
			}
			else if((str[i]>='a')&&(str[i]<='z'))
			{
				d=str[i]-'a';
			}
			if(count[d]==0)
			{
				count[d]=1;
				c++;
			}
		}
	}

	printf("%d\n",c);

	return 0;
}
