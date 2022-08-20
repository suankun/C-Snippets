#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main ()
{ 
    FILE *fp = NULL;
    fp = fopen("unexisting.txt", "r");
    
    if ( NULL == fp )
    { 
        perror("ERR: ");
        printf("\nerrno: %d : %s\n", errno, strerror(errno));
    }
    else
    {
        fclose(fp);
    }

    return 0;
} 