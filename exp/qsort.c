#include<stdio.h>
#include<stdlib.h>
//int comp((const void *)int *p,(const void *)int *q)
main()
{
	int i;
	int a[] = {1, 10, 2, 5, 4, 3};
	void *p;
	p=(void *)a; 
/*	char *p;
	p=(char *)(a+1);*/
	printf("%d\n",*(int*)p);

	//qsort(a,6,sizeof(int),comp);

/*	for(i=0;i<6;i++)
		printf("%d\t",a[i]);*/

}
