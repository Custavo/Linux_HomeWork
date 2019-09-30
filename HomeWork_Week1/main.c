#include"uhead.h"

void main()
{
	int a[m];
	arg b;
	usrand(100,a);
	
	ushow(100,a);
	printf("--------------------\n");
	b = avg_a_sum(100,a);
	ushow2(b);
	printf("--------------------\n");

	bsort(100,a);
	ushow(100,a);
	printf("--------------------\n");

	qsort(a,100,sizeof(int),compar);
	ushow(100,a);
	printf("--------------------\n");
	time_bsort(100,a);
	time_qsort(100,a);
}
