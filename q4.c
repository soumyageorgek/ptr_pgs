#include<stdio.h>
main()
{
	char **s;
	int i;
	s=malloc(5*sizeof(int));
printf("%d\n",s);
	for(i=0;i<5;i++){
		*(s+i)=malloc(20);
		scanf("%s",*(s+i));
		printf("%d\n",(s+i));
	}
	for(i=0;i<5;i++){
		printf("%s\n",*(s+i));
	}
		
}

