#include<iostream>
using namespace std;
void printarray(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int count=0;
        for (int j=0;j<n-1-i;j++){
            if (array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                count++;
            }
            printarray(array,n);
        }
        if (count==0){
            break;
        }
    }
}
int main(){
    int array[]={8,7,6,5,4,3};
    bubblesort(array,6);
    printarray(array,6);
}
