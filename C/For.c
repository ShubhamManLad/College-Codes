#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("No.%d is %d\n",i+1,i);
    }
}
/*
Expression 1 in for loop is optional can just write for(;i<  ;i++  )
Expression 2 is optional (would run infinitely unless break is used) Multiple conditions can be entered in Expression 2, but only last condition would be used for termination of the loop
Expression 3 is also optional
*/