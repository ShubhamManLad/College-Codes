#include<stdio.h>
int main()
{
    int b;
    int a=4;
    b= ++a + a++;
    printf("%d",b);
    return 0;
}