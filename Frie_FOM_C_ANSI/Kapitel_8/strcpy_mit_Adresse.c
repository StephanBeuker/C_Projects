
#include <stdio.h>
#include<string.h>

int main()
{

	char test[20] = {'\0'};

	char *s = "Test";
	s++;

	strncpy(test, s, 2);

    printf("%s\n",test);

	return 0;
}
