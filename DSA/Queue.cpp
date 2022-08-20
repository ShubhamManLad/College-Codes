#include<iostream>
using namespace std;
class Queue{
    private:
    int front;
    int rear;
    int size;
    int capacity;
    int* array;
    public:
    Queue(int n){
        front=0;
        rear=-1;
        size=0;
        capacity=n;
        array=(int*)malloc(sizeof(int)*n);
    }
    int isFull();
    int isEmpty();
    void Enqueue(int);
    void Dequeue();
    void extractEnds();
    void displayQueue();
};
int Queue::isFull(){
    return size==capacity;
}
int Queue::isEmpty(){
    return size==0;
}
void Queue::Enqueue(int item){
    if (isFull()){
        cout<<"Cant add any more elements to the queue"<<endl;
    }
    else if(rear==capacity-1){
        rear=0;
        size++;
        array[rear]=item;
        cout<<item<<" added to the queue"<<endl;
    }
    else{
        array[++rear]=item;
        size++;
        cout<<item<<" added to the queue"<<endl;
    }
}
void Queue::Dequeue(){
    if (isEmpty()){
        cout<<"Cant remove any more elements from the queue"<<endl;
    }
    else{
        size--;
        cout<<array[front++]<<" removed from the queue"<<endl;
    }
}
void Queue::extractEnds(){
    cout<<array[rear]<<" is at the rear "<<endl;
    cout<<array[front]<<" is at the front"<<endl;
}
void Queue::displayQueue(){
    if (front<rear){
        for (int i=front;i<capacity;i++){
            cout<<array[i]<<"   ";
        }
        cout<<endl;
    }
    else{
        for (int i=front;i<capacity;i++){
            cout<<array[i]<<"   ";
        }
        for (int j=0;j<=rear;j++){
            cout<<array[j]<<"   ";
        }
        cout<<endl;
    }
}
int main(){
    Queue queue(5);
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);
    queue.Enqueue(60);
    queue.displayQueue();
    queue.Dequeue();
    queue.Enqueue(70);
    queue.extractEnds();
    queue.displayQueue();
}