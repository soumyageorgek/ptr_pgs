#include<stdio.h>
main()
{
	char *s[5];
	int i=0;

	for(i=0;i<5;i++){
		s[i]=malloc(20);
		scanf("%s",s[i]);
		}

	for(i=0;i<5;i++)
		printf("%s",s[i]);
		
}
