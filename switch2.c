#include<stdio.h>
int main()
{
int marks;
//char grade;
printf("Enter the percentage marks:");
scanf("%d",&marks);

switch(marks/10)
{
case '9':
         printf("Grade A\n");
         break;

case '8':
         printf("Grade B\n");
         break;

case '7':
          printf("Grade C\n");
          break;

case '6':
          printf("Grade D\n");
          break;

          printf("Fail\n");
          break;

default:
         printf("Error!! Incorrect percentage");
}
return 0;

}
