#include<stdio.h>
int main()
{
	int n,n1;
	printf("enter the number:\n");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
	if(n1%10==0)
	{
		printf("%d",n1);
		break;
	}
	n1++;
	}
	return 0;
}
