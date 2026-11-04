#include<stdio.h>
void read_input(void);
void compute_power(void);
void display_result(void);
int base, exponent, result =1;
int main()
{
read_input();
compute_power();
display_result();
return 0;
}
void read_input(void){
printf("Enter base:\n");
scanf("%d",&base);
printf("Enter exponent:\n");
scanf("%d",&exponent);
}
void compute_power(void){
result = 1;
for(int i=1;i<=exponent;i++){
    result*=base;
}
}
void display_result(void){
printf("%d raised to power %d is %d\n",base,exponent,result);
}
