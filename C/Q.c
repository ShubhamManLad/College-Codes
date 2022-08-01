#include<stdio.h>
int main()
{
    int n, c, v, l;
    scanf("%d",&n);
    if (n%20==0)
    {
        c=n/20 ;
    }
    else
    {
        c=1+  (n/20);
    }
    int t;
    t=n-((c-1)*20);
    v=t/2 ;
    if (n%2==0)
    {
        l=2;
    }
    else
    {
        l=1;
    }
    printf("%d %d %d",c,v,l);

}

























