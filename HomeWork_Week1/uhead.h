#ifndef __UHEAD_H
#define	__UHEAD_H

#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "stdio.h"
#define m 100

typedef struct{
	float avg;
	int sum;
}arg;

void usrand(int n,int* a);
int usum(int n,int* a);
void ushow(int n,int* a);
void bsort(int n,int* a);
int compar(const void *a,const void *b);
arg avg_a_sum(int n,int* a);
void ushow2(arg a);
void time_bsort(int n,int *a);
void time_qsort(int n,int *a);

#endif /*__UHEAD_H*/
