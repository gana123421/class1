/*
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char S1[30],ch;
    printf("Enter String:\n");
    scanf("%s",S1);
    l=strlen(S1);
    for(i=0;i<l/2;i++)
    {
        ch=S1[i];
        S1[i]=S1[l-1-i];
        S1[l-1-i]=ch;
    }
    printf("Reversed string is %s\n",S1);
}
*/
