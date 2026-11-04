#include<stdio.h>
int main(){
printf("Statement 1\n");

goto skip;

printf("Statement 2\n");
printff("Statement 3\n");

skip:

printf("Statement 4\n");
return 0;
}
