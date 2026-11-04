#include<stdio.h>
void take_input(void);
char evaluate_grade(void);
int marks;
int main(){
take_input();
char result = evaluate_grade();
printf("Grade awarded:%c\n",result);
return 0;
}
void take_input(void){
printf("Enter your marks(0-100):");
scanf("%d",&marks);
}
char evaluate_grade(void){
char grade;
if (marks>=90)
grade = 'A';
else if(marks>=75)
grade = 'B';
else if(marks>=50)
grade = 'C';
else
grade = 'F';
return grade;
}
