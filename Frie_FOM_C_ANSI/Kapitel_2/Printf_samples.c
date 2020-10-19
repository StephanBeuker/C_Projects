#include<stdio.h>

int main() {

	printf("%-20s\n", "hello world");
	printf("%20s\n", "hello world");

	printf("4 + 11 / 2 = %i\n", 4+11/2);
	printf("4 + 11 / 2 = %10.2f\n", 4+11/2);
	printf("4 + 11 / 2 = %10.2f\n", 4.0+11.0/2.0);

	printf("4 + 10 / 3 = %5.5f\n", 4.0+10.0/3.0);


	return 0;
}
