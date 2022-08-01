#include<stdio.h>
int main()
{
    int L[4];
    for (int i=0;i<4;i++)
    {
        printf("Enter Element %d of the array\n",i+1);
        scanf("%d",&L[i]);
    }
    for (int i=0;i<4;i++)
    {
        printf("Element %d of the array is %d\n",i+1,L[i]);
    } 
}