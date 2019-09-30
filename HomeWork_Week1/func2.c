#include"uhead.h"

arg avg_a_sum(int n,int* a)
{
	int i,j;
	float ave;
	arg b;
	j=0;
	ave=0.0;
	for(i=0;i<n;i++)
	{
		j+=a[i];
	}
	ave=(float)j/n;
	b.avg = ave;
	b.sum = j;
	return b;
}
void ushow2(arg a)
{
	printf("sum = %d\n",a.sum);
	printf("avg = %f\n",a.avg);
}
