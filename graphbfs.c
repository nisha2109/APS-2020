#include <stdio.h>
#include <stdlib.h>
int a[20][20],q[20],visited[20],n,i,j,front=0,rear=0;
void bfs(int v)
{
    visited[v]=1;
    q[rear]=v;
    rear++;
    while(rear!=front)
    {
        int u=q[front];
        printf("%d\t",u);
        front++;
        int i=0;
        for(i=0;i<n;i++)
        {
            if(!visited[i] && a[u][i])
            {
                q[rear]=i;
                rear++;
                visited[i]=1;
            }
        }
    }
    printf("\n");
}
int main()
{
    int v;
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    printf("Enter graph data in matrix form:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    bfs(0);

    return 0;
}
