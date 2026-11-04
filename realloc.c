/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, newn, *ptr;

    printf("Enter total number of values:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr+i));
    }

    printf("Enter updated size of n:\n");
    scanf("%d", &n);

    int *ptr1 = (int *)realloc(ptr, n * sizeof(int));


   /* if(newn>n)
    {
        printf("Enter reallocated values:\n");
        for(i=n;i<newn;i++)
        {
            scanf("%d",&ptr[i]);
        }
    } */   //values of reallocated memory

  /*  printf("Previous address: %p, New address: %p\n",
           (void *)ptr, (void *)ptr1);

    printf("The entered values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr1[i]);
    }

    free(ptr1);
    return 0;
}
*/
