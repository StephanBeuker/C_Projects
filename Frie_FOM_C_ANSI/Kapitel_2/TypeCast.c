#include<stdio.h>

int main() {
    int i;

    char c = 'A';
    i = (int)c;
    printf("char c nach int i: %d\n", i);

    i = 67;
    c = (char)i;
    printf("int i nach char c: %c\n", i);

    float f = 2.345;
    i = (int)f;
    printf("float f nach int i: %d\n", i);

	return 0;
}
