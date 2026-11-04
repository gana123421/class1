/*#include<stdio.h>
void display(void);
int main()
{
display();
display();
}
void display(void)
{
static int c=1;// with static when it calls 2nd time initialization will be skipped, without static, when we 2nd time the memory stack will be deleted and initialize will be read
c += 5;
printf("\n c=%d",c);
}
*/
