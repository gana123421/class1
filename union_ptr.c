/*
#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;
    union Data *ptr = &d;

    ptr->i = 100;
    printf("Integer: %d\n", ptr->i);

    ptr->f = 3.14;
    printf("Float: %.2f\n", ptr->f);

    ptr->c = 'A';
    printf("Char: %c\n", ptr->c);

    return 0;
}
*/
