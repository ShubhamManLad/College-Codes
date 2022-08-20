#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[],int n){
    int i,j,key;
    for (i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={12,54,65,7,23,9};
    int n=6;
    insertionSort(arr,n);
    printArray(arr,n);
}