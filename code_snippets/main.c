#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,j;
    scanf("%d",&n);
    int w[500];
    int v[10000];
    int x,y;
    for (i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    int c;
    scanf("%d",&c);
    int arr[n+1][c+1];
    memset(arr,0,sizeof(arr));
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=c;j++)
        {
            if (j-w[i]<0)
            {
                arr[i][j]=arr[i-1][j];
            }
            else
            {
              x=arr[i-1][j];
                y=arr[i-1][j-w[i]]+v[i];
                //printf("%d ",y);
             if (x>=y)
                 arr[i][j]=x;
            else
                arr[i][j]=y;
            }
        }
    }


      printf("%d\n",arr[n][c]);
    return 0;
}

}
