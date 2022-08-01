#include<stdio.h>
int main()
{
    int n,A,k,B; // 2 3 4 1
    scanf("%d %d",&n, &k);
    int L[n],M[n];
    for (int i=0;i<n;i++)
    {
        //printf("Enter Element %d of the array\n",i+1);
        scanf("%d",&L[i]);
    }
    for (int j=0;j<k;j++)
    {
        A=L[0];
        for (int i=0;i<n;i++)
        {
            if (L[i]>A)
            {
                A=L[i];
                L[i]=0;
            }
        }
        printf("%d\t",A);
    }
}