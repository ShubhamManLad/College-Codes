#include<stdio.h>

int Div(int n)
{
    int s;
    for (int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    return s;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if  (Div(a)==b || Div(b)==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}