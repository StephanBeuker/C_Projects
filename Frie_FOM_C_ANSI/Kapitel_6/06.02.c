
#include <stdio.h>
#define MAX 100

int main()
{
	int i_array[MAX];
	long l_array[MAX];
	float f_array[MAX];
	double d_array[MAX];

	printf("Typ\tElementgroesse\tArray-Greosse\tArray-Laenge\n\n");

	printf("integer\t");
	printf("%d\t\t", sizeof(int));
	printf("%d\t\t", sizeof(i_array));
	printf("%d\n", (sizeof(i_array)/sizeof(int)));

	printf("long\t");
	printf("%d\t\t", sizeof(long));
	printf("%d\t\t", sizeof(l_array));
	printf("%d\n", (sizeof(l_array)/sizeof(long)));

	printf("float\t");
	printf("%d\t\t", sizeof(float));
	printf("%d\t\t", sizeof(f_array));
	printf("%d\n", (sizeof(f_array)/sizeof(float)));

	printf("double\t");
	printf("%d\t\t", sizeof(double));
	printf("%d\t\t", sizeof(d_array));
	printf("%d\n", (sizeof(d_array)/sizeof(double)));


	return 0;
}
