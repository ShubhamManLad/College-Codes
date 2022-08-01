#include<stdio.h>
int main()
{
    int a=50;
    int *p=&a;
    printf("Value of a is %d\n",a);
    printf("Value of a is %d\n",*p);
    printf("Address of a is %p\n",&a);
    printf("Address of a is %p\n",p);
    printf("Address of p is %p\n",&p);

    int arr[]={1,2,3,4,5,425,445};
    int *arrp=arr;
    printf("Value of first element of array is %d\n",arr[0]);
    printf("Value of first element of array is %d\n",*arr); //* is used to dereference
    printf("Value of first element of array is %d\n",*arrp);
    printf("Address of first elemnt of array is %p\n",arr); //pointer type data
    printf("Address of first elemnt of array is %x\n",&arr[0]); //hexadecimal
    printf("Address of first elemnt of array is %d\n",arrp); //integer

    printf("Value of second element of array is %d\n",arr[1]);
    printf("Value of second element of array is %d\n",arrp[1]);
    printf("Value of second element of array is %d\n",*(&arr[1]));
    printf("Value of second element of array is %d\n",*(arrp+1));
    printf("Value of second element of array is %d\n",*(arr+1));
    printf("Address of second elemnt of array is %d\n",arr+1); 
    printf("Address of second elemnt of array is %d\n",&arr[1]);
    printf("Address of second elemnt of array is %d\n",++arrp); 
   
}