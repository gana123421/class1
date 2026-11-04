#include<stdio.h>
void sum(int,int);//Function prototype
int a,b;
int main()
{
//int res;
printf("Enter a & b:\n");
scanf("%d %d",&a,&b);
sum(a,b);

}
void sum(int a,int b)
{
int c;
c = a+b;
printf("sum = %d\n",c);

}


