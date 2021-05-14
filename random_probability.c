
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

char prop(char *percentage){
    int a = 'a';
    int z = 'z';
    float percent = atof(percentage);
    //printf("%f/n", percent);
    srand(time(NULL));
    float rand_valu = ((float)rand()/RAND_MAX)*100;
    if (rand_valu <= percent){
        return ' ';
    }
    if(rand_valu > percent){
        char ch = rand()%(z-a+1)+a;
        return ch;
    }
}

int  main(int argc, char *argv[]){
    printf("%c\n",prop("16.753"));
    return 0;
}