#include<stdio.h>
int main()
{
float percentage;
char grade;
printf("Enter the percentage marks:");
scanf("%f",&percentage);

if(percentage >= 90 && percentage <= 100)
    grade = 'A';
else if(percentage >= 75 && percentage <= 89)
    grade = 'B';
else if(percentage >= 60 && percentage <= 74)
    grade = 'C';
else if(percentage >= 34 && percentage <= 59)
    grade = 'D';
else if(percentage<=33)
    grade = 'F';
else
grade = 'Error';

switch(grade)
{
case 'A':
printf("Grade A\n");
break;

case 'B':
printf("Grade B\n");
break;

case 'C':
printf("Grade C\n");
break;

case 'D':
printf("Grade D\n");
break;

case 'F':
printf("Fail\n");
break;

default:
    printf("Error!! Incorrect percentage");
}
return 0;

}
