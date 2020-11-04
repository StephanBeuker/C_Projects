#include <stdio.h>

int main()
{
	int i_array[10]={0,1,2,3,4,5,6,7,8,9};
	int *i_zgr;
	int i;

	float f_array[10]={.0,.1,.2,.3,.4,.5,.6,.7,.8,.9};
	float *f_zgr;

	i_zgr = &i_array[0];
	f_zgr = f_array;

    for (i=0; i<10; i++){
	//for (i=0; i<MAX; i++,i_zgr++, f_zgr++){

        printf("%d\t%f\n",*i_zgr++,*f_zgr++);

		/*printf("%d\t%f\n",*i_zgr,*f_zgr);
		i_zgr++;
		f_zgr++;*/
    }


    return 0;
}
