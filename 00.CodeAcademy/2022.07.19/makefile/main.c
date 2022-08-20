#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
#include "speak.h" 
#include "shout.h" 
/* Write message m in uppercase to stdout */
void shout(char m[]) 
{ 
   int len; /* message length */ 
   char *mcopy; /* copy of original message */ 
   int i; 
   len = strlen(m); 
   mcopy = (char *)malloc(len*sizeof(char)+1); 
   strcpy(mcopy,m);
   for (i = 0; i < len; i++) 
      mcopy[i] = toupper(mcopy[i]); 
   speak(mcopy); free(mcopy); 
}
