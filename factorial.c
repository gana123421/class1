#include<stdio.h>
int main(){
unsigned long long i = 1,n;
int factorial =1;
printf("Enter a number n:\n");
scanf("%d",&n);
while (i<=n){
factorial = factorial * i;
i++;
}
printf(" Factorial of %d is %llu\n",n,factorial);
return 0;
}
