#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    scanf("%s",&ch);
    if((ch[i]>'0'||ch[i]<'9')&&(ch[i]>='a'||ch[i]>='z')&&(ch[i]>='A'||ch[i]>='Z'))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

