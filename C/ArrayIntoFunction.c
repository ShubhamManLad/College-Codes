#include<stdio.h>

void avg(int arr[])
{
    int s;
    for (int i = 0; i < 5; i++)
    {
        printf("The #%d element array is %d\n",i+1,arr[i]);
        s=s+arr[i];
    }
    printf("%d\n",s);   
}

void AVG(int *ptr)
{
    int S;
    for (int i = 0; i < 5; i++)
    {
        printf("The #%d element array is %d\n",i+1,*(ptr+i));
        S=S+*(ptr+i);
    }
    printf("%d\n",S);
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    AVG(arr);
    avg(arr); //Cant use both of them together, will give inccorect value


}