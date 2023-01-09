#include <stdio.h>
#include <stdlib.h>

struct activity
{
    int data;
    int start;
    int end;
}typedef activity;

activity* create (int data, int start, int end){
    activity* act = (activity*) malloc (sizeof (activity));
    act->data = data;
    act->start = start;
    act->end = end;

    return act;
}

void bubblesort (activity* arr [], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j+1]->end < arr[j]->end)
            {
                activity* temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }        
    }    
}


void print(activity* arr[],int n){
    for(int i = 0 ; i < n ; i++ ){
        printf("Activity %d: %d - %d\n",arr[i]->data,arr[i]->start,arr[i]->end);
    }
    printf("\n");
}

int selection (activity* arr[] , activity* final[],int n){
    activity* key = arr[0];
    int k = 1;
    final[0] = key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]->start > key->end)
        {
            final[k] = arr[i];
            k++;
            key = arr[i];
        }
        
    }
    return (k);
}


int main(){
    activity* act5 = create(5,1,4);
    activity* act4 = create(4,3,5);
    activity* act1 = create(1,0,6);
    activity* act2 = create(2,5,7);
    activity* act3 = create(3,3,9);
    activity* act6 = create(6,8,11);


    activity* array [] = {act1,act2,act3,act4,act5,act6};
    print(array, 6);

    bubblesort(array,6);
    print(array,6);

    activity* final[6];
    int finalsize = selection(array,final,6);
    print(final,finalsize);


}

