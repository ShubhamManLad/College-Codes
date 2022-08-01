#include <stdio.h>
int main()
{
    int C, S, M=0;
    printf("Class obtained by student:\n ");
    scanf("%d", &C);

    printf("Number of subjects failed:\n ");
    scanf("%d",&S);

    switch(C)
    {
        case 1:
        if(S>3)
        M=0;
        else M=5*S;
        break;

        case 2:
        if (S>2)
        M=0;
        else M=4*S;
        break;

        case 3:
        if (S>1)
        M=0;
        else M=5;
        break;

        default:
        printf("Enter Valid Marks \n");
    }
    printf("Grace marks awarded to the student are %d\n",M);
}