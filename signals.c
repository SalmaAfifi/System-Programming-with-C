/*Write a C program, which continuously prints out 
integer numbers in increasing order started by 1. 
The program must terminate after 1 second. 
To implement the program use a timer and signaling.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

void terminator(){
    kill(getpid(), SIGKILL);
}

int main(int argc, char *argv[]){
    signal(SIGALRM, terminator);
    alarm(1);
    printf("PID: %d\n", getpid());
    int i = 1;
    while(1){
        printf("%d\n", i);
        i++;
    }
    return 0 ;
}