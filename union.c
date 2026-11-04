/*
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 3.14;
    printf("d.f = %f\n", d.f);

    strcpy(d.str, "Hello");
    printf("d.str = %s\n", d.str);// if we print d.i and d.f after this we get the garbage value for the d.i and d.f

    return 0;
}
*/
