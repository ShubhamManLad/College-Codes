#include<stdio.h>
int main()
{
    printf("Hello world\n");
    int i,n;
    for (i=0;i<10;i++)
    {
        printf("%d Enter number:\n",i);
        scanf("%d",&n);
        if (n==5)
        {
            continue;
        }
        printf("Didnt Encounterd Continue\n");
        if (n==10)
        {
            break;
        }
    }
}