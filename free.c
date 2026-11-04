/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;

    ptr = (int *)malloc(3 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }

    printf("Enter values:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", (ptr+i));
    }

    free(ptr);

    printf("The entered values are:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t",*(ptr+i));
    }

    return 0;
}
*/
