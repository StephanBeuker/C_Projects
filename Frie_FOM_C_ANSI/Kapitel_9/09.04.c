
#include <stdio.h>

struct mitarbeiter
{
	int nummer;
	char *name;
};

int main()
{
	struct mitarbeiter daten[]={
                       {1,"Schmidt"},
	                   {2,"Meier"},
					   {3,"Adams"},
					   {4,"Walter"}
					};
	struct mitarbeiter *z_ma;

    int count;

	z_ma=daten;

	for (count=0;count<4;count++)
	{
		printf("Adresse: %u\tMitarbeiter: %d\t%s\n",
		        z_ma,z_ma->nummer,z_ma->name);
		z_ma++;
	}


    return 0;
}
