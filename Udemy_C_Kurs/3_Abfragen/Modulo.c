#include<stdio.h>

int main(){
    int a = 110;
    int b = 8;
    int c = a / b;
    int d = a-(b * c);
    int div_result = a / b;
    int div_remainder = a % b;

    printf("%d / %d = %d\n",a, b, c);    //13, 13*8=104
    printf("Rest = %d\n", d);
    printf("\tdiv remainder = %d\n", div_remainder);
    printf("\tGegenprobe: %d * %d + %d = %d", div_result, b,div_remainder, div_result*b+div_remainder );




    return 0;
}