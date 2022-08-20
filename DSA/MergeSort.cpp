#include<iostream>
using namespace std;
void printarray(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int p,int q,int r){
    int array[100];
    int i=p;
    int j=q+1;
    int k=p;
    while(i<=q && j<=r){
        if(arr[i]<arr[j]){
            array[k]=arr[i];
            k++;
            i++;
        }
        else{
            array[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=q){
        array[k]=arr[i];
        k++;
        i++;
    }
    while(j<=r){
        array[k]=arr[j];
        k++;
        j++;
    }
    for(int i=0;i<r+1;i++){
        arr[i]=array[i];
    }
    //printarray(array,r+1);
}
void mergeSort(int array[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergeSort(array,p,q);
        mergeSort(array,q+1,r);
        merge(array,p,q,r);
    }
}
int main(){
    int arr[]={9,6,5,0,8,2,16,11,1,3,4,7,10};
    mergeSort(arr,0,12);

    printarray(arr,13);
}
