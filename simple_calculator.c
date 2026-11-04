#include<stdio.h>
int main()
{
float n1, n2;
char operation;
printf("Enter n1:");
scanf("%f",&n1);

printf("Enter n2:");
scanf(" %f",&n2);

printf("Enter Operation(+,-,*,/):");
scanf(" %c",&operation);

switch(operation)
{
case '+':
printf("%.2f", n1+n2);
break;

case '-':
printf(" %.2f", n1-n2);
break;

case '*':
printf(" %.2f", n1*n2);
break;

case '/':
printf(" %.2f", n1/n2);
break;

default:
    printf("Error!! operator is not correct");
}
return 0;
}
