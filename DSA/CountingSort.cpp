#include<iostream>
#include<cstring>
using namespace std;
void printarray(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void countingSort(int array[],int n){
    int k=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>k){
            k=array[i];
        }
    }
    int countarr[k+1];
    memset(countarr,0,sizeof(countarr));
    for(int i=0;i<n;i++){
        countarr[array[i]]++;
    }
    printarray(countarr,k+1);
    int i=0;
    int j=0;
    while(i<=k+1){
        if(countarr[i]>0){
            array[j]=i;
            countarr[i]=countarr[i]-1;
            j++;
        }
        else{
            i++;
        }
    }   
}
int main(){
    int array[]={8,7,6,6,8,6};
    countingSort(array,6);
    printarray(array,6);
}