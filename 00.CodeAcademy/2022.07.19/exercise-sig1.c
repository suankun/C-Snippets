#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signum){
    printf("\nInside handler function\n");
}
int main(){
    signal(SIGINT, sig_handler);

    for(int i = 1;;i++){
        printf("%d :Inside main function\n",i);
        sleep(1);
    }
}
