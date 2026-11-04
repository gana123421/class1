/*ex for logical operators*/

#include<stdio.h>
int main(){
int a,b;
printf("Enter two integers:");
scanf("%d %d",&a,&b);
printf("a and b: %d\n",a & b);
printf("a or b: %d\n",a|b);
printf("a xor b: %d\n",a^b);
return 0;
}
