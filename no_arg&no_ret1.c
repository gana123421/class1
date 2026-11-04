#include<stdio.h>
void sum(void);//Function prototype
int a,b;
int main()
{
sum();
}
void sum(void)
{
int res;
printf("Enter a and b:\n");
scanf("%d %d",&a,&b);
res = a + b;
printf("Sum = %d\n",res);
return 0;
}


