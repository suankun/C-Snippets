#include <stdio.h>
#include <stdlib.h>

int visited[100];
int n;
int Adj[100][100];
int count;
////////////////
void DFS_Traversal();
void DFS(int v);
////////////////

int main()
{
    n = 5; // върхове
    for (int red = 0; red < n; red++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("Adf[%d][%d] = ", red, col);
            scanf("%d", &Adj[red][col]);
        }
    }
    DFS_Traversal();
}

void DFS_Traversal()
{
    int v;
    for (v = 0; v < n; v++)
    {
        visited[v] = 0;
    }
    DFS(0);
    count = 1;
    for (v = 0; v < n; v++)
    {
        if (visited[v] == 0)
        {
            count++;
            DFS(v);
        }
    }
}

void DFS(int s)
{
    // s - стартов връх
    printf("%d", s);
    visited[s] = 1;
    for (int j = 0; j < n; j++)
    {
        if (Adj[s][j] == 1)
        {
            if (visited[j] == 0)
            {
                DFS(j);
            }
        }
    }
}