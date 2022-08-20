#include<iostream>
using namespace std;
void linearSearch(int array[],int key,int n){
    for (int i=0;i<n;i++){
        if(array[i]==key){
            cout<<key<<" is present at index "<<i<<endl;
        }
    }
}
int main(){
    int arr[]={12,54,65,7,23,9};
    int n=(sizeof(arr))/(sizeof(int));
    int key=65;
    linearSearch(arr,key,n);
}