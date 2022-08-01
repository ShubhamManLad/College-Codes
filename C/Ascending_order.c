#include<stdio.h>
int main(){
    int arr[5]={3,6,7,1,3};
    for(int i=0;i<5;++i){
        for(int j=i+1;j<5;++j){
            int a;
            if (arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=arr[i];
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}