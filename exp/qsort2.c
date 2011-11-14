#include<stdio.h>

int comp(const void *p,const void *q)
{
	return strcmp((char*)p,(char*)q);
}

main()
{
	char *s[] = {"pqr", "def", "abc"};
	int i;

	qsort(s,3,sizeof(s[0]),comp);

	for(i=0;i<3;i++)
		printf("%s\t",s[i]);

	printf("\n");

}	
