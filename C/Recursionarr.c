#include<stdio.h>
void* reverse(int *arr)
{
    int i=0;
    int rev[6]; //1 2 3 4 5 6 /0
    if(i<6)
    {
        reverse(arr+1);
        printf("%d\n",rev[i]);
        rev[i++]=*arr;
        
    }
        
}
int main()
{
    int arr[6]={1,2,3,4,5,0};
    reverse(arr);

}