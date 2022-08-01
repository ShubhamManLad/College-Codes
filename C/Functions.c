#include<stdio.h>
int sum(int a,int b) //arguement+return
{
    return a+b;
}
void diff()  //no arguement no return
{
    int c,d;
    printf("Enter numbers\n");
    scanf("%d",&c);
    scanf("%d",&d);
    int D=c-d;
    printf("Diff is %d\n",D);
}
int multi()  //only return
{
    int e,f;
    printf("Enter numbers\n");
    scanf("%d",&e);
    scanf("%d",&f);
    return (e*f);
}
void divide(int g, int h)  //only arguemnt
{
    int i= g/h;
    printf("Quotient is %d\n",i);
}
int main()
{
    int a=10, b=20;
    int s=sum(a,b);
    printf("Sum is %d\n",s);

    diff();
    
    int m;
    m=multi();
    printf("Product is %d\n",m);
    
    int g=20, h=10;
    divide(g,h);
}