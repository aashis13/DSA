#include <stdio.h>
#define MAX 100

int adjMatrix[MAX][MAX];
int visited[MAX];

void addEdge(int u, int v)
{
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

void DFS(int vertex, int vertices)
{
    printf("%d ", vertex);
    visited[vertex] = 1;
    for (int i = 0; i < vertices; i++)
    {
        if (adjMatrix[vertex][i] == 1 && !visited[i])
        {
            DFS(i, vertices);
        }
    }
}

void BFS(int start, int vertices)
{
    int queue[MAX], front = 0, rear = 0;
    int visited[MAX] = {0};
    queue[rear++] = start;
    visited[start] = 1;
    while (front < rear)
    {
        int vertex = queue[front++];
        printf("%d ", vertex);
        for (int i = 0; i < vertices; i++)
        {
            if (adjMatrix[vertex][i] == 1 && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}
int main()
{
    int vertex = 5;
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 4);
    addEdge(2, 4);
    printf("DFS Traversal: ");
    DFS(0, vertex);
    printf("\n");
    printf("BFS Traversal: ");
    BFS(0, vertex);
    printf("\n");
    return 0;
}
