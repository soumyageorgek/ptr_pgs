#include<stdio.h>

int comp(const void *p,const void *q)
{
//printf("%d %d",(int *)p,(int *)q);
/*printf("%c %c",*(*(char *)p),*(*(char *)q));
printf("%d",strcmp(*(char *)p,*(char *)q));*/
	return strcmp(*(int*)p,*(int*)q);
}

main()
{
	char *s[] = {"lmn","pqr", "abc","def"};
	int i;
//printf("%d\n",*(int *)s);
//printf("%d\n",s[0]);
	//printf("%d",sizeof(s[0]));
	qsort(s,4,sizeof(int),comp);

	for(i=0;i<4;i++)
		printf("%s\t",s[i]);

	printf("\n");

}	
