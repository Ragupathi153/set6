#include<stdio.h>
int main()
{
    int n,m,a,sum=0;
    scanf("%d%d",&n,&m);
    sum=n+m;
    a=sum%2;
    if(a==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}
