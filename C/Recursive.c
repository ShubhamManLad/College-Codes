#include<stdio.h>

int fib(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int FIB(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }

    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    printf("%d\n",FIB(n));
}