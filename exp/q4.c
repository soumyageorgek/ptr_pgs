#include<stdio.h>
main()
{
	char **s;
	int i=0;
	for(i=0;i<5;i++)
		s+i=malloc(4);

	for(i=0;i<5;i++)
		*(s+i)=malloc(20);

	//for(i=0;i<5;i++){
	//	*(s+i)=malloc(20);
	//	scanf("%s",*(s+i));
	  //  }
	
}
