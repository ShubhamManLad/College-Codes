#include<iostream>
using namespace std;
void printarray(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//{9, 1, 4, 14, 5, 15, 6}
//{9, 1, 4, 6, 5, 15, 14}
//{5, 1, 4, 6, 9, 15, 14} -->j=4
//{5, 1, 4, 6, 9}, {15, 14} 
//{4 ,1, 5, 6, 9}, {14,15}--> j=2,6

int partition(int arr[],int high, int low){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(pivot>=arr[i]){
            i++;
        }
        while(pivot<arr[j]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int high,int low){
    int i=low;
    int j=high;
    if (i<j){
        int k=partition(arr,high,low);
        quickSort(arr,k,low); //{5, 1, 4, 6, 9}
        quickSort(arr,high,k+1); //{15, 14}
    }
}
int main(){
    int A[] = {9, 1, 4, 14, 5, 15, 6};
    int n = 7;
    quickSort(A,6,0);
    printarray(A, n);
}