#include"uhead.h"

void bsort(int n,int* a)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int compar(const void *a,const void *b)
{
	int *aa=(int *)a, *bb=(int *)b;
	if(* aa>* bb) return 1;
	if(* aa==* bb) return 0;
	if(* aa<* bb) return -1;
}

void time_bsort(int n,int *a)
{
	struct timeval t1, t2;
	gettimeofday(&t1, NULL);
	bsort(n,a);
	gettimeofday(&t2, NULL);
	printf("bsort time %ld us\n", t2.tv_usec - t1.tv_usec);
}

void time_qsort(int n,int *a)
{
	struct timeval t1, t2;
	gettimeofday(&t1, NULL);
	qsort((void*)a, n, sizeof(int), compar);
	gettimeofday(&t2, NULL);
	printf("qsort time %ld us\n", t2.tv_usec - t1.tv_usec);
}
