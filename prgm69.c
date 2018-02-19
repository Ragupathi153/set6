#include<stdio.h>
int main()
{
    int n,m,rem=0,k;
    scanf("%d%d",&n,&m);
    k=n-m;
    rem=k%2;
    if(rem==0)
    printf("even");
    else
    printf("odd");
    
    return 0;
}
