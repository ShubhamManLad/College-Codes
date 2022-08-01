#include <stdio.h>
int main()
{
    int H,M,S,c=0;
    while (c==0)
    {
        printf("Enter time in HH24:MM:SS format:");
        scanf("%d:%d:%d",&H, &M, &S);
        if (H>23 || M>59 || S>59 || H<0 || M<0 || S<0)
        {
            printf("The entered time is invalid!\n");
            c=0;
        }
        else 
        {
            printf("%d:%d:%d is a valid time format.\n",H, M, S);
            c=1;
        }
    }   
}