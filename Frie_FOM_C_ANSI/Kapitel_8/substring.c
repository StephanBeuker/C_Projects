#include<stdio.h>
#include<string.h>

int main() {

    char test1[] = "12345678";
    char test2[10];


    // ab der Zahl 3 sollen 5 Zeichen ausgegeben werden
    strncpy(test2, &test1[2], 5);
    test2[5] = '\0';

    printf("%s",test2);

    return 0;
}
