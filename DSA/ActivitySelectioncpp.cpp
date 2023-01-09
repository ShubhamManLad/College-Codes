#include <iostream>
using namespace std;

class Activity{
    public:
    int data;
    int start;
    int final;
};

void bubblesort (Activity arr [], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j+1].final < arr[j].final)
            {
                Activity temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }        
    }    
}

void print(Activity arr[],int n){
    for(int i = 0 ; i < n ; i++ ){
        printf("Activity %d: %d - %d\n",arr[i].data,arr[i].start,arr[i].final);
    }
    printf("\n");
}

void selection (Activity arr[] , Activity final[],int n){
    Activity key = arr[0];
    int k = 1;
    final[0] = key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].start > key.final)
        {
            final[k] = arr[i];
            k++;
            key = arr[i];
        }
    }
    return k;
}


int main(){
    int n;
    cin>>n;
    Activity activity[n];
    for (int i = 0; i < n; i++)
    {
        cin>>activity[i].data
           >>activity[i].start
           >>activity[i].final;
        
    }

    print(activity,n);

    bubblesort(activity,n);
    print(activity,n);

    Activity final[n];
    int finalsize = selection(activity,final,6);
    print(final,finalsize);
    


}

