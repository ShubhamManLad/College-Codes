#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[4][2];
    //int arr2 [n];
    for (int i=0;i<n;i++){
        //int arr[2];
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
        //arr1[i]=arr;
    }
    for (int i=0;i<n;i++){
        printf("(%d,%d)",arr1[i][0],arr1[i][1]);
    }
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<i;j++){
    //         for(int k=0;k<j;k++){
    //             int arr2[3];

    //         }
    //     }
    // }
    return (0);
}