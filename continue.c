#include<stdio.h>
int main(){
int a, i, sum = 0;
for(i=1;i<=5;i++)
{
printf("Enter a number:\n");
scanf("%d",&a);
if(a<0)
{
continue; //skips the iteration
}
sum = sum + a;
}
printf("Sum is %d",sum);
return 0;
}
