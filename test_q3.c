
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>
unsigned int swap(unsigned int N){
    unsigned int first, second, result;
    first = (N>>8);
    second = (N<<8);
    //result = ((N<<8)&255)|((N>>8)&255);
    return second|first;


}

int  main(int argc, char *argv[]){
    unsigned int t =  3923;
    printf("%u\n", swap(t));
    return 0;
}