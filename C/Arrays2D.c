#include<stdio.h>
int main()
{
    int M[2][3]={{1,2,3},{4,5,6}};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter %dx%d element:",i+1,j+1);
            scanf("%d",M[i][j]); 
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("The %dx%d element is: %d\n",i+1,j+1,M[i][j]);
        }
    }
}