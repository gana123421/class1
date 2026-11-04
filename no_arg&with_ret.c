#include<stdio.h>
int sum(void);//Function prototype
int a,b;
int main()
{
int result;
result = sum();
printf("sum = %d\n",result);
}
int sum(void)
{
int res;
printf("Enter a and b:\n");
scanf("%d %d",&a,&b);
res = a + b;
return res;
}


