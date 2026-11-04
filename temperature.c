#include<stdio.h>
float tempc, tempf;
int main(){
int choice;
printf("Temperature conversion:\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to celsius\n");
printf("Enter choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter temperature value:");
scanf("%f",&tempc);
tempf = (tempc * 9 / 5) + 32;
printf("Temperature value in Fahrenheit is: %.2f\n",tempf);
break;

case 2:
printf("Enter temperature value:");
scanf("%f",&tempf);
tempc = (tempf - 32) * 5/9;
printf("Temperature value in Celsius is: %.2f\n",tempc);
break;

default:
printf("Enter valid choice\n");
break;
}
return 0;
}
