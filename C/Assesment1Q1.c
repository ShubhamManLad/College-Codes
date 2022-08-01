#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int min=arr[0];
int max=arr[1];
for (int j=0;j<n;j++)
{
    if(min>arr[j])
    {
        min=arr[j];
    }
    if(max<arr[j])
    {
        max=arr[j];
    }
}
int diff=max-min;
printf("%d",diff);
return 0;
}
