#include<iostream>
using namespace std;
void printarray(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int min;
        int min_index=i;
        min=array[i];
        for(int j=i+1;j<n;j++){
            if(min>array[j]){
                min_index=j;
            }
        }
        if(min_index!=i){
            min=array[min_index];
            array[min_index]=array[i];
            array[i]=min;

        }
        printarray(array,n);
    }
}
int main(){
    int array[]={1,11,9,10,5,6};
    selectionSort(array,6);
    printarray(array,6);
}