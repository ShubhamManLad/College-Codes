#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Queue {
    int front;
    int rear;
    int size;
    unsigned capacity;
    int *array;
};

struct Queue *createQueue (unsigned n)
{
    struct Queue *queue;
    queue=(struct Queue*)malloc(sizeof(struct Queue));
    queue -> front=0;
    queue -> size=0;
    queue -> rear=-1;
    queue ->capacity=n;
    queue ->array=(int*)malloc(n*sizeof(int));
    return queue;
};

int isFull(struct Queue *queue){
    return queue->size==queue->capacity;
}

int isEmpty(struct Queue *queue){
    return queue ->size==0; 
}

void enqueue(struct Queue *queue, int item){
    if (isFull(queue)){
        printf("Cant add more elements\n");
    }
    else{
        if (queue->rear==queue->capacity-1){
            // printf("circular queue being used\n");
            // printf("%d is at front\n",extractFront(queue));
            queue->rear=0;
            queue->array[queue->rear]=item;

            queue->size+=1;
            printf("%d enqueued\n",item);
            // printf("%d is the size\n",queue->size);
            // printf("%d is at front\n",extractFront(queue));
        }
        else{
            queue->array[++queue->rear]=item;
            queue->size+=1;
            printf("%d enqueued\n ",item);
        }
        }
    }

void dequeue(struct Queue *queue){
    if (isEmpty(queue)){
        printf("Can't dequeue because the queue is empty!\n");
    }
    else{
        int front=queue->array[queue->front];
        printf("%d is removed\n",front);
        int item= queue->array[queue->front];
        queue->front++;
        queue->size--;
        int newfront=queue->array[queue->front];
    }
}
int extractFront(struct Queue* queue){
    int front=queue->array[queue->front];
    return front;
}
int extractRear(struct Queue* queue){
    int rear=queue->array[queue->rear];
    return rear;
}
void display(struct Queue* queue){
    int front=queue->front;
    int rear=queue->rear;
    int cap=queue->capacity;
    if(front<rear){
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue->array[i]);
        }
    }
    else if(front>rear){
        for(int i=front;i<cap;i++){
            printf("%d\t",queue->array[i]);
        }
        for(int j=0;j<=rear;j++){
            printf("%d\t",queue->array[j]);
        }
    }
    printf("\n");
}
int main(){
    struct Queue *queue=createQueue(5);
    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    enqueue(queue,40);
    enqueue(queue,50);
    printf("%d is at front\n",extractFront(queue));
    printf("%d is at rear\n",extractRear(queue));
    display(queue);
    printf("\n");

    enqueue(queue,60);
    dequeue(queue);
    printf("%d is at front\n",extractFront(queue));
    enqueue(queue,70);
    enqueue(queue,80);
    printf("%d is at front\n",extractFront(queue));
    printf("%d is at rear\n",extractRear(queue));
    display(queue);    
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    display(queue);
    enqueue(queue,90);
    enqueue(queue,100);
    enqueue(queue,110);
    display(queue); 
}