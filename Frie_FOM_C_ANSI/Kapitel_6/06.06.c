#include <stdio.h>

int main()
{
	short s[10];
	int i[10], index=0;
	float f[10];
	double d[10];

	printf("%17s %8s %6s %8s\n","Short","Integer","Float","Double");
	printf("======================================\n");

	for (index=0;index<10;index++)
		printf("Element %d; %lu %lu %lu %lu\n",index,(unsigned long)&s[index],
			(unsigned long)&i[index],(unsigned long)&f[index],
			(unsigned long)&d[index]);

	printf("======================================\n");


    return 0;
}
