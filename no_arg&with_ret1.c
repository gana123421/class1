#include<stdio.h>
int getNumber(void);
int main(){
int x=getNumber();
printf("Returned value:%d\n",x);
}
int getNumber(void){
return 42;
}
