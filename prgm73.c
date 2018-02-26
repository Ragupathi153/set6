#include<stdio.h>
int main()
{
	int n,f,l,c=0,i;
	printf("enter the number:\n");
	scanf("%d%d%d",&n,&f,&l);
	for(i=f;i<=l;i++)
	{
	if(n>f&&n<l)
	{
		c++;
	}
	}
	if(c!=0)
	printf("yes");
	else
	printf("no");
	return 0;
}
