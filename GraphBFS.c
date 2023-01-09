// Breadth First Search
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Queue
{
    int front;
    int rear;
    int size;
    unsigned capacity;
    int *array;
};

struct Queue *createQueue(unsigned n)
{
    struct Queue *queue;
    queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = 0;
    queue->size = 0;
    queue->rear = -1;
    queue->capacity = n;
    queue->array = (int *)malloc(n * sizeof(int));
    return queue;
};

int isFull(struct Queue *queue)
{
    return queue->size == queue->capacity;
}

int isEmpty(struct Queue *queue)
{
    return queue->size == 0;
}

void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
    {
        printf("Cant add more elements\n");
    }
    else
    {
        if (queue->rear == queue->capacity - 1)
        {
            if (queue->front == queue->capacity)
            {
                queue->front = 0;
            }
            queue->rear = 0;
            queue->array[queue->rear] = item;

            queue->size += 1;
            //printf("%d enqueued\n", item);
        }
        else
        {
            queue->array[++queue->rear] = item;
            queue->size += 1;
            //printf("%d enqueued\n ", item);
        }
    }
}

int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Can't dequeue because the queue is empty!\n");
    }
    else
    {
        int front = queue->array[queue->front];
        //printf("%d is removed\n", front);
        int item = queue->array[queue->front];
        queue->front++;
        queue->size--;
        return front;
    }
}

void display(struct Queue *queue)
{
    if (!isEmpty(queue))
    {
        int front = queue->front;
        int rear = queue->rear;
        int cap = queue->capacity;
        if (front < rear)
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d\t", queue->array[i]);
            }
        }
        else if (front > rear)
        {
            for (int i = front; i < cap; i++)
            {
                printf("%d\t", queue->array[i]);
            }
            for (int j = 0; j <= rear; j++)
            {
                printf("%d\t", queue->array[j]);
            }
        }
        else if (queue->front == queue->rear)
        {
            printf("%d", queue->array[queue->front]);
        }
        printf("\n");
    }
}

struct node
{
    int vertex;
    struct node *next;
};

struct node *createNode(int v)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph
{
    int numVertices;
    struct node **adjList; // array of nodes created dynamically
    int *visted;           // array of nodes visted created dynamically
};

struct graph *createGraph(int vertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    graph->adjList = malloc(vertices * sizeof(struct node));
    graph->visted = malloc(vertices * sizeof(int));
    for (int i = 0; i < vertices; i++)
    {
        graph->adjList[i] = NULL;
        graph->visted[i] = 0;
    }
    return graph;
}

// Adding an edge
void addEdge(struct Graph *graph, int src, int dest)
{
    // Add edge from src to dest
    struct node *newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // Add edge from dest to src
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// BFS algorithm
void bfs(struct Graph *graph, int startVertex)
{
    struct Queue *q = createQueue(40);
    graph->visted[startVertex] = 1;
    enqueue(q, startVertex);
    while (!isEmpty(q))
    {
        int currentVertex = dequeue(q);
        printf("%d ", currentVertex);
        struct node *temp = graph->adjList[currentVertex];
        while (temp)
        {
            int adjVertex = temp->vertex;
            if (graph->visted[adjVertex] == 0)
            {
                graph->visted[adjVertex] = 1;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
        }
    }
}

int main()
{
    struct Graph *graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 4);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);

    printf("\n");
    for (int i = 0; i < 5; i++)
    {   
        printf("%d Vertex:",i);
        struct node* temp = graph->adjList[i];
        while (temp!= NULL)
        {
            printf("-> %d ",temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
    
    bfs(graph, 0);
    
    return 0;
}