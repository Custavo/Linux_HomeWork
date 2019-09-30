#include"uhead.h"

void usrand(int n,int* a)
{
	int i,j;
	srand((int)time(0));
	for(i=0;i<n;i++)
	{
		a[i]=1+(int)(100.0*rand()/(RAND_MAX+1.0));
	}
}
int usum(int n,int* a)
{
	int i,j;
	j=0;	
	for(i=0;i<n;i++)
	{
		j+=a[i];
	}
	return j;
}
void ushow(int n,int* a)
{
	int i;	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}

