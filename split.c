/* Write the "split" function here */
/* Similar to the Python string.split() function */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **split(char *a,char *b) {
  int i = 0,j;
  char **s;	
  char *temp,*temp2,*temp3;	

  temp = a;
  s = malloc(5 * sizeof (char *));
  temp3 = malloc(20);

  while(strstr(temp,b) != 0) {	
    temp2 = strstr(temp, b);
    //s[i] = malloc(100);
    strncpy(temp3, temp, temp2-temp);
    temp3[temp2-temp+1] = '\0';
    strcpy(s[i],temp3);
    i++;
    temp = temp2 + strlen(b);
  }
  
  if((*temp)!=0) {
    s[i] = malloc(100);
    strcpy(s[i],temp);
    i++;
  }
  
  s[i] = 0;
  return s;
}

main() {
  char **s;
  char a[100], b[100];
  int i;

  scanf("%s", a); /* say "abc::def::ijk" */

  scanf("%s", b); /* say "::" */

  s = split(a, b);

  for(i = 0; s[i] != 0; i++)
    printf("%s\n", s[i]);

/* Above loop should print "abc", "def", "ijk" */
}

