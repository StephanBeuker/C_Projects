#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i=1;
	int j=1;

		do
		{
			do
			{
                printf("*");
			    j++;
		    }
		    while (j<=10);

		    printf("\n");
		    i++;
		    j=1;
        }
		while (i<=10);


	return 0;
}
