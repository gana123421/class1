/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("Enter total no of values:\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Entered values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);//used to avoid the memory leak

}
*/
