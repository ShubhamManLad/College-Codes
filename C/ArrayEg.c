#include<stdio.h>
int main()
{
    int n,A; // 2 3 4 1
    scanf("%d",&n);
    int L[n];
    int *ptr;
    ptr=L;
    for (int i=0;i<n;i++)
    {
        //printf("Enter Element %d of the array\n",i+1);
        scanf("%d",&L[i]);
    }
    A=L[0];
    for (int i=0;i<n;i++)
    {
        if (L[i]>A)
        {
            A=L[i];
        }
        int *address;
        address=&L[i];
        printf("Address is %d and value is %d\n",address,*(ptr+i));
    }
    printf("Max Element is %d",A); 
}