#include <stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(i<n)
    {
        printf("No.%d is %d\n",i+1,i);
        i++;
    }
}