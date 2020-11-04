
#include <stdio.h>
#include<string.h>

int main()
{

	char test[20] = "1234567890123456789";

	strcpy(test, "Hallo");

    printf("%s\n",test);

	char *s = "Test";


	strncat(test, s, 2);

    printf("%s\n",test);

	return 0;
}
