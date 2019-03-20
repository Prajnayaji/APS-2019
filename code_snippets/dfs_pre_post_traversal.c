#include <stdio.h>
#include <stdlib.h>

int v;
int s;
int m[10][10];
int visited[10];
int b[10][2];
int count=1;

void dfs(int m[10][10],int v,int s)
{
    visited[s]=1;
    int i,j;
    for (i=0;i<v;i++)
    {
        if (m[s][i]==1&&visited[i]==0)
        {
           // printf("%d\t",i);
            b[i][0]=count++;
            dfs(m,v,i);
            b[i][1]=count++;
        }

    }

    return;
}

int main()
{
    int i,j;
    scanf("%d",&v);  // number of vertices
    for (i=0;i<v;i++)
    {
        for (j=0;j<v;j++)
        {
            scanf("%d ",&m[i][j]);  // matrix
        }
    }
    scanf("%d",&s);  //source node

    for (i=0;i<v;i++)
        visited[i]=0;
       // printf("dfs traversal is\n");
   //printf("%d\t",s);
    b[s][0]=count++;
    dfs(m,v,s);
    b[s][1]=count++;
     for(j=0;j<v;j++)
    {
        if (visited[j]==0)
        {
           // printf("%d\t",j);
            b[j][0]=count++;
            dfs(m,v,j);
            b[j][1]=count++;
        }
    }

    for(i=0;i<v;i++)
    {
            printf("%d %d %d\n",i,b[i][0],b[i][1]);
    }

}
