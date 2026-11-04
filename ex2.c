/* ex program for arithmetic operation */
#include<stdio.h>

int main(){
int a,b;
int sum,diff,prod,quotient,remainder;
printf("Enter two integers:"); //input two numbers
scanf("%d %d",&a,&b);
sum = a+b;// Arithmetic operations
diff = a-b;
prod = a*b;
quotient = a/b;
remainder = a%b;
printf("Sum = %d\n",sum); // Display result
printf("Difference = %d\n",diff);
printf("Product = %d\n",prod);
printf("Quotient = %d\n",quotient);
printf("Remainder = %d\n",remainder);
return 0;
}
