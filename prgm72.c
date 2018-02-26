#include<stdio.h>
int main()
{
	char ch[20];
	int i,count=0;
	printf("enter the string:\n");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0')
	{
	if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
	{
		count++;
	}
	i++;
	}
	if(count!=0)
	printf("vowel is present");
	else
	printf("vowel is not present");
	return 0;
}
