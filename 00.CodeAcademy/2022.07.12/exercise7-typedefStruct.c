#include <stdio.h>
#include <stdlib.h>

typedef struct key_t{
    int n;
    char *s;
}key_t;

int main(){
    key_t something;
    something.n=2;
    something.s=(char*)malloc(sizeof(char)*10);
    something.s = "ssss";
    printf("%d %s",something.n,something.s);
    free(something.s);
}
