#include<stdio.h>
main()
{
	char *s[5];
	int i=0;

	for(i=0;i<5;i++)
		scanf("%s",(s+i));

	for(i=0;i<5;i++)
		printf("%s\n",(s+i));
		
}
