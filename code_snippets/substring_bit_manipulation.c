#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "subset.c"
int main()
{
   char data[]={'a','b','c'};
   int set_size,i;
   set_size=3;

   int j;
int size=pow(2,set_size);
for(i=0;i<size;i++)
{
    for(j=0;j<set_size;j++)
    {
        if (i&(1<<j))
            printf("%c",data[j]);
    }
    printf("\n");
}
}
