#include<stdio.h>
#include<stdlib.h>
int comp(const void *p,const void *q)
{
	return *(int*)q-*(int*)p;
}
main()
{
	int i;
	int a[] = {1, 10, 2, 5, 4, 3};

	qsort(a,6,sizeof(int),comp);

	for(i=0;i<6;i++)
		printf("%d\t",a[i]);

}
