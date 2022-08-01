#include <stdio.h>
int main()
{
    int N,i,j,k;
    printf("Enter Number of Students: ");
    scanf("%d/n",&N);
    int L[N];
    
    for(i=0; i<N; i++)
    {
        printf("Enter the Reg. No.: Student No. %d : ",i+1);
        scanf("%d",&L[i]);
    }
    for (i=0;i<N; i++)
    {
        for(j=0;j<i;j++)
        {
            if (L[i]==L[j])
            {
                N--;
                for(k=i;k<N;k++)
                {
                    L[k]=L[k+1];
                    i--;
                }
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",L[i]);
    }
}
