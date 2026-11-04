#include<stdio.h>
int main()
{
int num, n, i, res;
printf("Enter the num:\n");
scanf("%d",&num);
printf("Enter the n:\n");
scanf("%d",&n);
for (i=1; i<=n;i++)
{
res = num * i;
printf("%d * %d = %d\n",num,i,res);
}
return 0;
}
