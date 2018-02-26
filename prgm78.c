#include<stdio.h>
int main()
{
	int n,n1;
	printf("enter the number:\n");
	scanf("%d",&n);
	n1=n%13;
	if(n1==0)
{
	printf("yes");
}
else
{
	printf("no");
	
}
	return 0;
}
