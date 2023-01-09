// Depth First Search
#include <stdio.h>
#include <stdlib.h>
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
    struct node **adjList; // array of &nodes created dynamically
    int *visted;           // array of nodes visted created dynamically
};

struct Graph* createGraph(int vertices)
{
    struct Graph* graph = (struct Graph *)malloc(sizeof(struct Graph));
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

// DFS algorithm
void dfs(struct Graph* graph, int startVertex){
    printf("%d ", startVertex);
    graph->visted[startVertex] = 1;
    struct node *temp = graph->adjList[startVertex];
    while (temp)
    {
        if (graph->visted[temp->vertex] != 1)
        {
            dfs(graph,temp->vertex);
        }
        temp = temp->next;
    }
            
}

int main()
{
    struct Graph *graph ;
    graph = createGraph(7);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 4, 5);
    addEdge(graph, 4, 6);

    printf("\n");
    for (int i = 0; i < 7; i++)
    {   
        printf("%d Vertex:",i);
        struct node* temp = graph->adjList[i];
        while (temp!= NULL)
        {
            printf("-> %d  ",temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }

    dfs(graph, 0);
    
    return 0;
}