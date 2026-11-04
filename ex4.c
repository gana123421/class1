/*ex for logical operators*/

#include<stdio.h>
int main(){
int a,b;
printf("Enter two integers:");
scanf("%d %d",&a,&b);
printf("a and b greater than 0: %d\n",a>0 && b>0);
printf("a or b greater than 0: %d\n",a>0 || b>0);
printf("not of a: %d\n",!(a>0));
return 0;
}
