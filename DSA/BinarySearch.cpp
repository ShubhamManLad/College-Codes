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
int binarySearch(int array[],int u,int l,int element){
    if(u>=l){
        int mid=(u+l)/2;
        if(array[mid]>element){
            return binarySearch(array,mid-1,l,element);
        }
        else if(array[mid]<element){
            return binarySearch(array,u,mid+1,element);
        }
        else if(array[mid]==element){
            return mid;
        }
    }
    return -1;
}
int binarysearch(int array[],int n,int key){
    int start=0;
    int end=n-1;
    while(end>=start){
        int mid=(end+start)/2;
        if (key==array[mid]){
            return mid;
        }
        else if(key>array[mid]){
            start=mid+1;
        }
        else if(key<array[mid]){
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={12,54,65,78,230,900};
    int result=binarySearch(arr,5,0,230);
    cout<<"Element found at "<<result<<" position"<<endl;
}
// 2 3 5 6 8 9 --->5/2=2
// 2 3 5 6 8 9 10 --->6/2=3





