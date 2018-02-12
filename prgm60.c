include<stdio.h>
int main()
{
    int n,i,t1,t2=1,t3=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t1=t2+t3;
        t2=t3;
    t3=t1;
    printf("%d",t1);
     }
}
