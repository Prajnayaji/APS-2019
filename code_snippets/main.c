#include <stdio.h>
#include <stdlib.h>
#include "possible_sum.c"

int main()
{
    int data[]={3,5,10};
    int value=15;
     value=value+1;
    int arr[value];
    memset(arr,0,value*sizeof(arr[0]));
    int i,j;
    int x,k;
    arr[0]=1;
    for (i=0;i<3;i++)
    {

              k=0;
          for (j=data[i];j<value;j++)
          {
              arr[j]=arr[j]+arr[k++];
          }
      for (x=0;x<value;x++)
        printf("%d ",arr[x]);
        printf("\n");
    }



}
