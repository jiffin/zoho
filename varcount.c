#include<stdio.h>
int main()
{
	int a[26]={0},n=0,count[10]={0},i,diff,var_c=0;
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
				diff=str[i]-'A';
			}
			else if((str[i]>='a')&&(str[i]<='z'))
			{
				diff=str[i]-'a';
			}
			if(count[diff]==0)
			{
				count[diff]=1;
				var_c++;
			}
		}
	}

	printf("%d\n",var_c);

	return 0;
}
