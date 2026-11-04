#include<stdio.h>
int sum(int a, int b);//Function prototype
int a,b,result;
int main()
{
printf("Enter a and b:\n");
scanf("%d %d",&a,&b);
result = sum(a,b);
printf("Sum = %d\n",result);
}
int sum(int a, int b)
{

return a + b;
}


