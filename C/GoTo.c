#include <stdio.h>
int main()
{
    int n;
    for (int i=0;i<5;i++)
    {
        label:
        printf("%d\n",i);
        for (int j=0;j<3;j++)
        {
            printf("Enter No.:\n");
            scanf("%d",&n);
            if (n==0)
            {
                goto end;
            }
            if (n==1)
            {
                goto label;
            }
        }
        
    }
    end:
}