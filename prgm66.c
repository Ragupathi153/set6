#include<stdio.h>
int main()
{
    int n,m=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            m=m+1;
        }
            }
    if(m==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}
