#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr1 = (char *)malloc(sizeof(char));
    if (ptr1 == NULL)
    {
        printf("Memory Error!\n");
    }
    else
    {
        *ptr1 = 'S';
        printf("%c %d %d", *ptr1, ptr1, &*ptr1);
    }

    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    //Malloc
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is  %d \n",i,ptr[i]);
    }
    free(ptr);
    //Calloc
    //int *ptr;
    ptr=(int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is  %d \n",i,ptr[i]);
    }
    //Realloc
    int N;
    printf("Enter the new size of array:");
    scanf("%d",&N);
    ptr=(int*)realloc(ptr, N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("Enter the value no %d of this array ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("The value of %d of this array is  %d \n",i,ptr[i]);
    }
}