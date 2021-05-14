
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

void doit(){
    time_t t;
    time(&t);
    char *readable_time = strdup(ctime(&t));
    printf("\n%s\n", readable_time);
}

int  main(int argc, char *argv[]){
    signal(SIGINT, doit);
    pause();
    return 0;
}