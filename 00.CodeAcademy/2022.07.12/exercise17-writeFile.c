#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;


   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

    fprintf(fptr,"%s\n ","Points");

   for(num=1;num<200;num+=10)
        fprintf(fptr,"%d ",num);


   fclose(fptr);

   return 0;
}
